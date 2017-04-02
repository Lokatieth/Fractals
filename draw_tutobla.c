/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tutobla.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 23:15:35 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 16:10:41 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "tutobla.h"

void	ft_draw_tutobla(t_id *s, int x, int y, int i, long double z_i)
{
	static int tutobla[1200] = {TUTOBLA};

	mlx_image_put_pixel(s, x, y, tutobla[(int)(fabsl(fmod(i * 20 *
		z_i, 999)))]);
}

void	ft_draw(t_id *s)
{
	pthread_t	p[MT];
	int i;
	int j;

	// if (s->fractale == 1)
	// {
	// 	i = -1;
	// 	while (++i < MT)
	// 		pthread_create(&p[i], NULL, ft_draw_mandelbrot, &s->t[i]);
	// 	j = -1;
	// 	while (++j < MT)
	// 		pthread_join(p[j], NULL);
	// 	mlx_put_image_to_window(s->mlx, s->win, s->img, 0, 0);
	// }
	if (s->fractale == 2)
	{
		i = -1;
		while (++i < MT)
			pthread_create(&p[i], NULL, ft_draw_julia, &s->t[i]);
		j = -1;
		while (++j < MT)
			pthread_join(p[j], NULL);
		mlx_put_image_to_window(s->mlx, s->win, s->img, 0, 0);
	}
// 	else if (s->fractale == 3)
// 		ft_draw_burning_ship(s);
// 	else if (s->fractale == 4)
// 		ft_draw_custom1(s);
	else if (s->fractale == 5)
	{
		i = -1;
		while (++i < MT)
			pthread_create(&p[i], NULL, ft_draw_root, &s->t[i]);
		j = -1;
		while (++j < MT)
			pthread_join(p[j], NULL);
		mlx_put_image_to_window(s->mlx, s->win, s->img, 0, 0);
	}
// 	else if (s->fractale == 6)
// 		ft_draw_mandelibal(s);
// 	else if (s->fractale == 7)
// 		ft_draw_julibalia(s);
// 	else if (s->fractale == 8)
// 		ft_draw_kalandra(s);
// }
}
void	mlx_image_put_pixel(t_id *s, int x, int y, int col)
{
	int color;

	color = mlx_get_color_value(s->mlx, col);
	if (x > 0 && x < W_X && y > 0 && y < W_Y)
		*(unsigned int *)(s->data + ((int)s->bpp * x) +
				(s->s_line * y)) = color;
}

void	ft_choose_fractal(t_id *s)
{
	if (s->fractale == 1)
		ft_initialization_mandel(s);
	else if (s->fractale == 2)
		ft_initialization_julia(s);
	else if (s->fractale == 3)
		ft_initialization_burning_ship(s);
	else if (s->fractale == 4)
		ft_initialization_custom1(s);
	else if (s->fractale == 5)
		ft_initialization_root(s);
	else if (s->fractale == 6)
		ft_initialization_mandelibal(s);
	else if (s->fractale == 7)
		ft_initialization_julibalia(s);
	else if (s->fractale == 8)
		ft_initialization_kalandra(s);
}

void	ft_first_creation(t_id *s)
{
	s->modif = 1;
	s->int_color = 0;
	s->ext_color = 0;
	s->decalx = 0;
	s->decaly = 0;
	s->mlx = mlx_init();
	s->win = mlx_new_window(s->mlx, W_X, W_Y, WIN_NAME);
	ft_choose_fractal(s);
	ft_draw(s);
	mlx_mouse_hook(s->win, mouse_reaction, s);
	mlx_key_hook(s->win, single_press, s);
	mlx_hook(s->win, KEYPRESS, KEYPRESSMASK, key_reaction, s);
	mlx_hook(s->win, MOTIONNOTIFY, POINTERMOTIONMASK, ft_julia_mouse, s);
	mlx_loop(s->mlx);
}

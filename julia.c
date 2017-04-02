/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 12:11:47 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 10:20:19 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "turgreen.h"

int		ft_julia_mouse(int x, int y, t_id *s)
{
<<<<<<< HEAD
	if (y == 0)
		return (0);
=======
	static int i = 0;

	i++;

	if (i % 10 == 0)
	{

>>>>>>> b7002166af60a79808384258a693f5d512987c35
	if (s->mouse_movement == 1)
	{
		s->c_r = s->c_r_base * y / W_Y;
		s->c_i = s->c_i_base * x / W_X;
		ft_recreate_img(s);
		ft_draw(s);
	}
}
	return (0);
}

void	ft_initialization_julia(t_id *s)
{
	s->mouse_movement = 1;
	s->x1 = -1;
	s->x2 = 1;
	s->y1 = -1.2;
	s->y2 = 1.2;
	s->c_r_base = 1.42;
	s->c_r = 1;
	s->it = 0;
	s->c_i_base = 1.42;
	s->c_i = 0.5;
	s->it_max = 5;
	s->zoom = 1;
	s->oldx1 = s->x1;
	s->oldy1 = s->y1;
	s->img = mlx_new_image(s->mlx, W_X, W_Y);
	s->data = mlx_get_data_addr(s->img, &s->bit_per_pixel, &s->s_line,
			&s->endian);
	s->bpp = s->bit_per_pixel / 8;
}

// void	ft_draw_turgreen(t_id *s, int x, int y, int i, long double z_i)
// {
// 	static int turgreen[1200] = {TURGREEN};

// 	(void)z_i;
// 	mlx_image_put_pixel(s, x, y, turgreen[(int)(fabsl(fmod(i * 20 * z_i, 999)))]);
// }

void	*ft_draw_julia(void *z)
{
	int l[2];
	int i;
	t_thread *m;
	long double z_r;
	long double z_i;
	long double tmp;

	m = (t_thread*)z;
	l[0] = m->lim[0] - 1;
	while (++l[0] < m->lim[2])
	{
		l[1] = m->lim[1] - 1;
		while (++l[1] < m->lim[3])
		{
			z_r = (l[0] * (m->s->x2 - m->s->x1) / W_X + m->s->x1) * m->s->zoom;
			z_i = (l[1] * (m->s->y2 - m->s->y1) / W_Y + m->s->y1) * m->s->zoom;
			i = -1;
			while (++i < m->s->it_max && z_r * z_r + z_i * z_i < 4)
			{
				tmp = z_r;
				z_r = z_r * z_r - z_i * z_i + m->s->c_r;
				z_i = 2 * z_i * tmp + m->s->c_i;
			}
			if (i == m->s->it_max)
				ft_choose_interior(m->s, l[0], l[1], i, z_i);
			else
				ft_choose_exterior(m->s, l[0], l[1], i, z_i);
		}
	}
	return(NULL);
}

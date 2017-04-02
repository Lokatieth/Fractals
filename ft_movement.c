/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 12:59:39 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 14:31:42 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_recreate_img(t_id *s)
{
	if (s->img)
	{
		mlx_destroy_image(s->mlx, s->img);
	}
	s->img = mlx_new_image(s->mlx, W_X, W_Y);
	s->data = mlx_get_data_addr(s->img, &s->bit_per_pixel, &s->s_line,
		&s->endian);
	s->bpp = s->bit_per_pixel / 8;
}

void	ft_next_fractale(t_id *s, int keycode)
{
	if (keycode == 69)
	{
		if (s->fractale < 8)
			s->fractale++;
		ft_recreate_img(s);
		ft_draw(s);
	}
	if (keycode == 78)
	{
		if (s->fractale >= 2)
			s->fractale--;
		ft_recreate_img(s);
		ft_draw(s);
	}
}

void	ft_iteration_ten(t_id *s, int keycode)
{
	if (keycode == 115)
	{
		s->it_max = s->it_max + 10;
		ft_recreate_img(s);
		ft_draw(s);
	}
	if (keycode == 119)
	{
		if (s->it_max > 10)
			s->it_max = s->it_max - 10;
		ft_recreate_img(s);
		ft_draw(s);
	}
	ft_putstr("Nombre d'iteration =\t");
	ft_putnbr(s->it_max);
	write(1, "\n", 1);
}

void	ft_iteration_digit(t_id *s, int keycode)
{
	if (keycode == 116)
	{
		s->it_max = s->it_max + 1;
		ft_recreate_img(s);
		ft_draw(s);
	}
	if (keycode == 121)
	{
		if (s->it_max > 1)
			s->it_max = s->it_max - 1;
		ft_recreate_img(s);
		ft_draw(s);
	}
	ft_putstr("Nombre d'iteration =\t");
	ft_putnbr(s->it_max);
	write(1, "\n", 1);
}

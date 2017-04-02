/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burningship.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 12:11:41 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 09:50:49 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_initialization_burning_ship(t_id *s)
{
	s->x1 = -2.1;
	s->x2 = 0.6;
	s->y1 = -1.2;
	s->y2 = 1.2;
	s->it_max = 50;
	s->zoom = 1;
	s->oldx1 = s->x1;
	s->oldy1 = s->y1;
	s->img = mlx_new_image(s->mlx, W_X, W_Y);
	s->data = mlx_get_data_addr(s->img, &s->bit_per_pixel, &s->s_line,
			&s->endian);
	s->bpp = s->bit_per_pixel / 8;
}

void	ft_draw_burning_ship(t_id *s)
{
	int y;
	int x;

	x = -1;
	while (++x < W_X)
	{
		y = -1;
		while (++y < W_Y)
		{
			s->c_r = (x * (s->x2 - s->x1) / W_X + s->x1) * s->zoom;
			s->c_i = (y * (s->y2 - s->y1) / W_Y + s->y1) * s->zoom;
			s->z_r = 0;
			s->z_i = 0;
			s->i = -1;
			while (++s->i < s->it_max && s->z_r * s->z_r + s->z_i * s->z_i < 4)
			{
				s->tmp = s->z_r;
				s->z_r = fabsl(s->z_r * s->z_r - s->z_i * s->z_i + s->c_r);
				s->z_i = fabsl(2 * s->z_i * s->tmp + s->c_i);
			}
			// s->i == s->it_max ? ft_choose_interior(s, x, y) :
			// ft_choose_exterior(s, x, y);
		}
	}
	mlx_put_image_to_window(s->mlx, s->win, s->img, 0, 0);
}

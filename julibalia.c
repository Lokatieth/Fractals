/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julibalia.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 09:22:24 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 10:53:26 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_initialization_julibalia(t_id *s)
{
	s->mouse_movement = 1;
	s->x1 = -1;
	s->x2 = 1;
	s->y1 = -1.2;
	s->y2 = 1.2;
	s->c_r_base = 0.5;
	s->c_r = 1;
	s->it = 0;
	s->c_i_base = 0.2;
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

void	ft_draw_julibalia(t_id *s)
{
	int x;
	int y;

	x = -1;
	while (++x < W_X)
	{
		y = -1;
		while (++y < W_Y)
		{
			s->z_r = (x * (s->x2 - s->x1) / W_X + s->x1) * s->zoom;
			s->z_i = (y * (s->y2 - s->y1) / W_Y + s->y1) * s->zoom;
			s->i = -1;
			while (++s->i < s->it_max && s->z_r * s->z_r + s->z_i * s->z_i < 4)
			{
				s->tmp = s->z_r * 2;
				s->z_r = sqrt(s->z_r - s->z_r) - sqrt(s->z_i * s->z_i) + s->c_r;
				s->z_i = 2 * s->z_i * s->tmp + s->c_i;
			}
			// if (s->i == s->it_max)
				// ft_choose_interior(s, x, y);
			// else
				// ft_choose_exterior(s, x, y);
		}
	}
	mlx_put_image_to_window(s->mlx, s->win, s->img, 0, 0);
}

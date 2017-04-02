/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   root.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 21:52:04 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 11:39:26 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_initialization_root(t_id *s)
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

void	*ft_draw_root(void *z)
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
			while (++i < m->s->it_max && sqrt(z_r * z_r) + sqrt(z_i * z_i) < 4)
			{
				tmp = z_r * 2;
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
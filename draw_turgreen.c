/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_turgreen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 23:15:35 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 16:13:11 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "turgreen.h"

// void	ft_draw_turgreen(t_id *s, int x, int y)
// {
// 	static int turgreen[1200] = {TURGREEN};

// 	mlx_image_put_pixel(s, x, y, i, z_i, turgreen[(int)(fabsl(fmod(s->i * 20 *
// 		s->z_i, 999)))]);
// }

void	ft_draw_turgreen(t_id *s, int x, int y, int i, long double z_i)
{
	static int turgreen[1200] = {TURGREEN};

	// (void)z_i;
	mlx_image_put_pixel(s, x, y, turgreen[(int)(fabsl(fmod(i * 20 / z_i * s->modif, 999)))]);
}

void	ft_draw_plain_black(t_id *s, int x, int y)
{
	mlx_image_put_pixel(s, x, y, 0x000000);
}

void	ft_draw_plain_white(t_id *s, int x, int y)
{
	mlx_image_put_pixel(s, x, y, 0xFFFFFF);
}

void	ft_choose_interior(t_id *s, int x, int y, int i, long double z_i)
{
	int den;

	den = abs(s->int_color) % 9;
	if (den == 0)
		ft_draw_turgreen(s, x, y, i, z_i);
		// ft_draw_turgreen(s, x, y + s->decaly);
	if (den == 1)
		ft_draw_fire(s, x, y, i, z_i);
	if (den == 2)
		ft_draw_golsil(s, x, y, i, z_i);
	if (den == 3)
		ft_draw_smoke(s, x, y, i, z_i);
	if (den == 4)
		ft_draw_bluelet(s, x, y, i, z_i);
	if (den == 5)
		ft_draw_retoba(s, x, y, i, z_i);
	if (den == 6)
		ft_draw_plain_black(s, x, y);
	if (den == 7)
		ft_draw_plain_white(s, x, y);
	if (den == 8)
		ft_draw_tutobla(s, x, y, i, z_i);
}

void	ft_choose_exterior(t_id *s, int x, int y, int i, long double z_i)
{
	int den;

	den = abs(s->ext_color) % 9;
	if (den == 0)
		ft_draw_turgreen(s, x, y, i, z_i);
	if (den == 1)
		ft_draw_fire(s, x, y, i, z_i);
	if (den == 2)
		ft_draw_golsil(s, x, y, i, z_i);
	if (den == 3)
		ft_draw_smoke(s, x, y, i, z_i);
	if (den == 4)
		ft_draw_bluelet(s, x, y, i, z_i);
	if (den == 5)
		ft_draw_retoba(s, x, y, i, z_i);
	if (den == 6)
		ft_draw_plain_black(s, x, y);
	if (den == 7)
		ft_draw_plain_white(s, x, y);
	if (den == 8)
		ft_draw_tutobla(s, x, y, i, z_i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_golsil.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 23:15:35 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 09:56:13 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "golsil.h"

void	ft_draw_golsil(t_id *s, int x, int y, int i, long double z_i)
{
	static int golsil[1200] = {GOLSIL};

	mlx_image_put_pixel(s, x, y, golsil[(int)(fabsl(fmod(i * 20 *
		z_i* s->modif, 999)))]);
}

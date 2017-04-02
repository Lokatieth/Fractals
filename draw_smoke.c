/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_smoke.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 23:15:35 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 09:57:28 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "smoke.h"

void	ft_draw_smoke(t_id *s, int x, int y, int i, long double z_i)
{
	static int smoke[1200] = {SMOKE};

	mlx_image_put_pixel(s, x, y, smoke[(int)(fabsl(fmod(i * 20 *
		z_i* s->modif, 999)))]);
}

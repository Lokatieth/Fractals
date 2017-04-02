/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_bluelet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 23:15:35 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 09:54:58 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "bluelet.h"

void	ft_draw_bluelet(t_id *s, int x, int y, int i, long double z_i)
{
	static int b[1200] = {BLUELET};

	mlx_image_put_pixel(s, x, y, b[(int)(fabsl(fmod(i * 20 * z_i* s->modif, 999)))]);
	
}

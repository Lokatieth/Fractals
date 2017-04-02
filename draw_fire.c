/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fire.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/26 23:15:35 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 09:55:42 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "test.h"

void	ft_draw_fire(t_id *s, int x, int y, int i, long double z_i)
{
	static int fire[1200] = {TEST};

	mlx_image_put_pixel(s, x, y, fire[(int)(fabsl(fmod(999 - i *z_i * z_i * s->modif, 999)))]);
	
}

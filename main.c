/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 15:10:57 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 16:12:59 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		mouse_reaction(int button, int x, int y, t_id *s)
{
	if (button == 1 || button == 4)
	{
		s->oldx1 = s->x1;
		s->x1 = ZOOMPX - ((s->x2 - s->oldx1) / 4);
		s->x2 = ZOOMPX + ((s->x2 - s->oldx1) / 4);
		s->oldy1 = s->y1;
		s->y1 = ZOOMPY - ((s->y2 - s->oldy1) / 4);
		s->y2 = ZOOMPY + ((s->y2 - s->oldy1) / 4);
		ft_recreate_img(s);
		ft_draw(s);
	}
	if (button == 2 || button == 5)
	{
		s->oldx1 = s->x1;
		s->x1 = ZOOMPX - (s->x2 - s->oldx1);
		s->x2 = ZOOMPX + (s->x2 - s->oldx1);
		s->oldy1 = s->y1;
		s->y1 = ZOOMPY - (s->y2 - s->oldy1);
		s->y2 = ZOOMPY + (s->y2 - s->oldy1);
		ft_recreate_img(s);
		ft_draw(s);
	}
	return (0);
}

int		single_press(int keycode, t_id *param)
{
	if (keycode == 69 || keycode == 78)
		ft_next_fractale(param, keycode);
	if (keycode == 43)
		param->int_color--;
	if (keycode == 47)
		param->int_color++;
	if (keycode == 40)
		param->ext_color--;
	if (keycode == 37)
		param->ext_color++;
	if (keycode == 48)
		param->decaly = 0;
	ft_recreate_img(param);
	ft_draw(param);
	return (0);
}

int		key_reaction(int keycode, t_id *param)
{
	if (keycode == 53)
		exit(0);
	if (keycode == 115 || keycode == 119)
		ft_iteration_ten(param, keycode);
	if (keycode == 116 || keycode == 121)
		ft_iteration_digit(param, keycode);
	if (keycode == 49)
		param->mouse_movement = -param->mouse_movement;
	if (keycode == 126)
		param->decaly += 3;
	if (keycode == 125)
		param->decaly -= 3;
	if (keycode == 34)
		param->modif = param->modif * 1.1;
	if (keycode == 31)
		param->modif = param->modif / 1.1;
	ft_recreate_img(param);
	ft_draw(param);
	return (0);
}

void		init_thread(t_thread *t, t_id *s)
{
	int i;
	int j;
	int k;

	i = 0;
	j = W_X / sqrt(MT);
	k = W_Y / sqrt(MT);
	while (i < MT)
	{
		t[i].nb = i;
		t[i].lim[0] = i % (int)sqrt(MT) * j;
		t[i].lim[1] = (int)(i / sqrt(MT)) * k;
		t[i].lim[2] = i % (int)sqrt(MT) * j + j;
		t[i].lim[3] = (int)(i / sqrt(MT)) * k + k;
		t[i].s = s;
		++i;
	}
	s->modif = 1;
}

int		main(int argc, char **argv)
{
	t_id *s;

	s = (t_id*)malloc(sizeof(t_id) * 2);
	init_thread(s->t, s);
	ft_check_arg(argv[1], s, argc);
	return (0);
}

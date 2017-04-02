/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 15:12:15 by vbauguen          #+#    #+#             */
/*   Updated: 2016/05/27 14:43:04 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_check_arg(char *str, t_id *s, int argc)
{
	if (argc == 2 && ft_strcmp(str, "Mandelbrot") == 0)
		s->fractale = 1;
	else if (argc == 2 && ft_strcmp(str, "Julia") == 0)
		s->fractale = 2;
	else if (argc == 2 && ft_strcmp(str, "Burning_ship") == 0)
		s->fractale = 3;
	else if (argc == 2 && ft_strcmp(str, "Oni") == 0)
		s->fractale = 4;
	else if (argc == 2 && ft_strcmp(str, "Root") == 0)
		s->fractale = 5;
	else if (argc == 2 && ft_strcmp(str, "Mandelibal") == 0)
		s->fractale = 6;
	else if (argc == 2 && ft_strcmp(str, "Battleaxe") == 0)
		s->fractale = 7;
	else if (argc == 2 && ft_strcmp(str, "Kalandra") == 0)
		s->fractale = 8;
	else
	{
		ft_putendl("Usage : \t./fractol [fractale]\n");
		ft_putendl("Liste de fractales disponibles :");
		ft_putendl("\t- Mandelbrot\n\t- Julia\n\t- Burning_ship\n\t- Oni");
		ft_putendl("\t- Root\n\t- Mandelibal\n\t- Battleaxe\n\t- Kalandra");
		exit(0);
	}
	ft_first_creation(s);
}

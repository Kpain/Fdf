/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpain <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 17:00:38 by kpain             #+#    #+#             */
/*   Updated: 2016/01/08 12:36:43 by kpain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		main(int argc, char **argv)
{
	t_env *data;

	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, WIDTH, HEIGHT, "FDF 42");
	data->y = 50;
	while (data->y < 150)
	{
		data->x = 50;
		while (data->x < 150)
		{
			mlx_pixel_put(data->mlx, data->win,
					data->x, data->y, RED);
			data->x++;
		}
		data->y++;
	}
	mlx_loop(data->mlx);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpain <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/21 15:38:49 by kpain             #+#    #+#             */
/*   Updated: 2016/04/21 16:26:28 by kpain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>

int		my_key(int keycode, void *param)
{
	if (keycode == 126)
		mlx_pixel_put(mlx, win, 
	printf("key event %d\n", keycode);
	return (0);
}
int		main()
{
	void	*mlx;
	void	*win;

	int		x;
	int		y;
	mlx = mlx_init();
	win = mlx_new_window(mlx, 400, 400, "mlx 42");
	y = 50;
	while (y < 150)
	{
		x = 50;
		while (x < 150)
		{
			mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
			x++;
		}
		y++;
	}
	mlx_key_hook(win, my_key, 0);
	mlx_loop(mlx);
}

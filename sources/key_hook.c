/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpain <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 17:00:38 by kpain             #+#    #+#             */
/*   Updated: 2016/01/08 12:36:43 by kpain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	key_move_translation(int keycode, t_env *data)
{
	if (keycode == KEY_RIGHT)
		ft_map_translation(data, MOVE_RIGHT, 0, 0);
	else if (keycode == KEY_LEFT)
		ft_map_translation(data, MOVE_LEFT, 0, 0);
	else if	(keycode == KEY_UP)
		ft_map_translation(data, 0, MOVE_UP, 0);
	else if (keycode == KEY_DOWN)
		ft_map_transalation(data, 0, MOVE_DOWN);

}

int		key_hook(int keycode, t_env *data)
{
	if (keycode == KEY_ESC)
	{
		mlx_destroy_window(data->mlx, data->win);
		exit (0);
	}
	key_move_translation(keycode, data);
	//key_move_rotation(keycode, data);
	//key_move_zoom(keycode, data);
	draw_new(data);
	return (0);
}

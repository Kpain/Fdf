/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpain <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 17:00:38 by kpain             #+#    #+#             */
/*   Updated: 2016/01/08 12:36:43 by kpain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# include "./includes/command.h"
# include "../libft/libft.h"
# include "../minilibx-macos/mlx.h"

typedef struct		s_env
{
	void	*mlx;
	void	*win;
	int	x;
	int	y;
}			t_env;

#endif

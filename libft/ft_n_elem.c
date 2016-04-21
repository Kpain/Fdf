/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpain <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:38:28 by kpain             #+#    #+#             */
/*   Updated: 2015/12/07 20:20:32 by kpain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_n_elem(const char *s, char c)
{
	size_t i;
	size_t elem;

	i = 0;
	elem = 0;
	while (s != NULL && s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
			elem++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (elem);
}
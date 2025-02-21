/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   border.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:29:58 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/14 21:08:07 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

char	*get_params(char *params, int index)
{
	int			i;
	int			x;
	char		*border_seg;

	i = index * 4 * 2;
	x = 0;
	border_seg = (char *) malloc(sizeof(char) * (4 + 1));
	if (border_seg == NULL)
		return (NULL);
	while (x < 4)
	{
		border_seg[x] = params[i];
		i += 2;
		x++;
	}
	border_seg[x] = '\0';
	return (border_seg);
}

char	**create_border(char *params)
{
	int			y;
	char		**border;

	y = 0;
	border = (char **) malloc(sizeof(char *) * 4);
	if (border == NULL)
		return (NULL);
	while (y < 4)
	{
		border[y] = get_params(params, y);
		y++;
	}
	return (border);
}

void	free_border(char **border)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(border[i]);
		i++;
	}
	free(border);
}

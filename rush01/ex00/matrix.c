/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhorbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:28:48 by mkhorbi           #+#    #+#             */
/*   Updated: 2024/07/14 21:08:53 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

char	**create_mat(void)
{
	int		y;
	int		x;
	char	**mat;

	y = 0;
	mat = (char **) malloc(sizeof(char *) * 4);
	if (mat == NULL)
		return (NULL);
	while (y < 4)
	{
		mat[y] = (char *) malloc (sizeof(char) * (4 + 1));
		if (mat[y] == NULL)
			return (NULL);
		x = 0;
		while (x < 4)
		{
			mat[y][x] = '0';
			x++;
		}
		mat[y][x] = '\0';
		y++;
	}
	return (mat);
}

void	free_mat(char **mat)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(mat[i]);
		i++;
	}
	free(mat);
}

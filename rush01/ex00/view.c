/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:18:06 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/14 21:09:37 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

short int	view_col_invert(char **matrix, int x, int size)
{
	int		y;
	int		result;
	char	max;

	y = size - 1;
	result = 0;
	max = 0;
	while (y >= 0)
	{
		if (max < matrix[y][x])
		{
			max = matrix[y][x];
			result++;
		}
		y--;
	}
	return (result);
}

short int	view_col(char **matrix, int x, int size)
{
	int		y;
	int		result;
	char	max;

	y = 0;
	result = 0;
	max = 0;
	while (y < size)
	{
		if (max < matrix[y][x])
		{
			max = matrix[y][x];
			result++;
		}
		y++;
	}
	return (result);
}

short int	view_line_invert(char *line)
{
	int		i;
	int		result;
	char	max;

	max = 0;
	result = 0;
	i = ft_strlen(line) - 1;
	while (line[i])
	{
		if (max < line[i])
		{
			max = line[i];
			result++;
		}
		i--;
	}
	return (result);
}

short int	view_line(char *line)
{
	int		i;
	int		result;
	char	max;

	max = 0;
	result = 0;
	i = 0;
	while (line[i])
	{
		if (max < line[i])
		{
			max = line[i];
			result++;
		}
		i++;
	}
	return (result);
}

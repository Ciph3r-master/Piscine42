/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:59:47 by tjooris           #+#    #+#             */
/*   Updated: 2024/07/14 22:50:31 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_safe(int row, int col, char num, char **tab)
{
	int	x;

	x = 0;
	while (x < 4)
	{
		if (tab[col][x] == num || tab[x][row] == num)
			return (0);
		x++;
	}
	return (1);
}

int	is_good(char **tab, char **bord)
{
	short int	row;
	short int	col;

	row = 0;
	while (row < 4)
	{
		if (view_line(tab[row]) != (bord[2][row]) - '0'
			|| view_line_invert(tab[row]) != (bord[3][row]) - '0')
		{
			return (0);
		}
		col = 0;
		while (col < 4)
		{
			if (view_col(tab, col, 4) != (bord[0][col]) - '0'
				|| view_col_invert(tab, col, 4) != (bord[1][col]) - '0')
			{
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}

// PS On dit bord pour border :)
int	solve(char **tab, int col, int row, char **bord)
{
	int	nb;

	if (col == 3 && tab[col][row] == '\0')
		return (is_good(tab, bord));
	if (tab[col][row] == '\0' && col < 3)
		return (solve(tab, col + 1, 0, bord));
	if (tab[col][row] != '0')
		return (solve(tab, col, row + 1, bord));
	nb = 1;
	while (nb <= 4)
	{
		if (is_safe(row, col, (nb + '0'), tab))
		{
			tab[col][row] = (nb + '0');
			if (solve(tab, col, row + 1, bord))
				return (1);
			tab[col][row] = '0';
		}
		nb++;
	}
	return (0);
}

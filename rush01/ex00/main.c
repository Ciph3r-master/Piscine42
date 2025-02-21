/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:48:46 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/14 21:08:41 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_param(char *params)
{
	int	i;

	i = 0;
	if (!(params[i] >= '1' && params[i] <= '4') || (ft_strlen(params) != 31))
		return (0);
	while (params[i])
	{
		if (i % 2 == 1 && params[i] != ' ')
			return (0);
		i++;
	}
	i--;
	if (params[i] && !(params[i] >= '1' && params[i] <= '4'))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	**tab;
	char	**bord;

	if (argc != 2)
	{
		ft_printerr();
		return (-1);
	}
	if (!ft_check_param(argv[1]))
	{
		ft_printerr();
		return (-1);
	}
	bord = create_border(argv[1]);
	tab = create_mat();
	if (!(solve(tab, 0, 0, bord)))
	{
		ft_printerr();
		return (-1);
	}
	print_matrix(tab);
	free_border(bord);
	free_mat(tab);
	return (0);
}

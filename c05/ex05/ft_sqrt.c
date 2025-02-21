/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:11:05 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/15 11:21:19 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = nb / 2;
	if (nb == 1)
		return (1);
	while (i > 0)
	{
		if (i * i == nb)
			return (i);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;

	printf("%d\n", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:57:08 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/13 22:00:39 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;

	printf("%d\n", ft_recursive_power(atoi(argv[1]),atoi(argv[2])));
	return (0);
}
*/

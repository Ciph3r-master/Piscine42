/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:12:03 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/03 17:43:12 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n)
{
	if (n < 10)
	{
		ft_printchar('0');
		ft_printchar('0' + n);
	}
	else
	{
		ft_printchar(n / 10 + '0');
		ft_printchar(n % 10 + '0');
	}
}

void	ft_endprint(int a, int b)
{
	ft_print(a);
	ft_printchar(' ');
	ft_print(b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ <= 99)
	{
		b = a;
		while (b++ <= 98)
		{
			ft_endprint(a, b);
			if (a < 98)
				write(1, ", ", 2);
		}
	}
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:13:42 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/24 17:30:44 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	ft_printchar('\n');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_printchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_printchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_printchar(nb % 10 + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_printchar('\n');
		ft_putstr(par[i].copy);
		i++;
	}
}

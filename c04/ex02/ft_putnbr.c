/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:04:29 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/10 13:06:11 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_printchar(char c)
{
	write(1, &c, 1);
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

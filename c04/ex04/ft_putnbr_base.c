/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:08:01 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/16 19:33:22 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_printchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;
	int	base_size;

	i = -1;
	j = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	if (i <= 1)
		return (0);
	base_size = i;
	i = -1;
	while (++i < base_size)
	{
		j = -1;
		while (++j < base_size)
		{
			if (i != j && base[i] == base[j])
				return (0);
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	n;

	n = (long) nbr;
	if (!ft_check_base(base))
		return ((void) 0);
	base_len = ft_strlen(base);
	if (n < 0)
	{
		ft_printchar('-');
		n = n * -1;
	}
	if (n >= 0 && n < base_len)
	{
		ft_printchar(base[n]);
		return ((void) 0);
	}
	ft_putnbr_base(n / base_len, base);
	ft_printchar(base[n % base_len]);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("Check base : %d\n", ft_check_base(argv[1]));
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
*/

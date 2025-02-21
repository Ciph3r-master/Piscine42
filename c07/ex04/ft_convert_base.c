/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:11:03 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/18 13:45:59 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_check_base(char *base);
int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char c)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	dest[dest_len + i] = c;
	i++;
	dest[dest_len + i] = 0;
	return (dest);
}

int	ft_getmallocsize(int nbr, char *base)
{
	int				i;
	unsigned int	nb;
	int				baselen;

	i = 0;
	baselen = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		i++;
	}
	else
		nb = nbr;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / baselen;
		i++;
	}
	i++;
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base, char *str)
{
	int			base_len;
	long int	n;

	n = (long) nbr;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		ft_strcat(str, '-');
		n = n * -1;
	}
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, base, str);
	}
	ft_strcat(str, base[n % base_len]);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		first_conv;
	char	*str;
	char	*result;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	first_conv = ft_atoi_base(nbr, base_from);
	str = malloc(ft_getmallocsize(first_conv, base_to) * sizeof(char));
	result = ft_putnbr_base(first_conv, base_to, str);
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;

	char *result = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", result);
	return (0);
}
*/

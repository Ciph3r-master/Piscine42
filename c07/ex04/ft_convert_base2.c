/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:11:08 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/17 15:57:17 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iswspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_is_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
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
		if (base[i] == '+' || base[i] == '-' || ft_iswspace(base[i]))
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	baselen;

	if (!ft_check_base(base))
		return (0);
	baselen = ft_strlen(base);
	i = 0;
	sign = 1;
	result = 0;
	while (ft_iswspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_in_base(base, str[i]) >= 0)
	{
		result = (result * baselen) + ft_is_in_base(base, str[i]);
		i++;
	}
	return (result * sign);
}

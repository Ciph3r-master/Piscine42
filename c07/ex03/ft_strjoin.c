/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:10:34 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/24 09:32:38 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
}

int	get_size(char **strs, int size, int seplen)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 0;
	result = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			j++;
		result += j;
		i++;
	}
	result += seplen * (size - 1);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		seplen;

	i = -1;
	seplen = ft_strlen(sep);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0] = 0;
		return (str);
	}
	str = malloc(sizeof(char) * get_size(strs, size, seplen) + 1);
	if (str == NULL)
		return (NULL);
	str[0] = 0;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	char *str = ft_strjoin(argc - 1, &argv[1], "-");
	printf("%s\n", str);
	free(str);
	return (0);
}
*/

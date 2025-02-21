/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:18:34 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/20 14:12:51 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(char *src, int size)
{
	char	*dup;
	int		i;

	if (size == 0)
		return (NULL);
	i = 0;
	dup = (char *) malloc(sizeof(char) * size + 1);
	if (dup == NULL)
		return (NULL);
	while (src[i] && i < size)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_get_size(char *str, char *charset)
{
	int	i;
	int	checkword;
	int	result;

	checkword = 1;
	i = 0;
	result = 0;
	while (str[i])
	{
		if (!ft_is_separator(str[i], charset) && checkword)
		{
			result++;
			checkword = 0;
		}
		if (ft_is_separator(str[i], charset))
			checkword = 1;
		i++;
	}
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		start;
	int		i;
	char	**split;
	int		sp_index;

	start = 0;
	i = 0;
	sp_index = 0;
	split = malloc(sizeof(char *) * (ft_get_size(str, charset) + 1));
	while (str[start] || str[i])
	{
		start = i;
		while (str[start] && ft_is_separator(str[start], charset))
		{
			start++;
			i = start;
		}
		while (str[i] && !ft_is_separator(str[i], charset))
			i++;
		split[sp_index++] = ft_strndup(&str[start], (i - start));
	}
	return (split);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;

	char **split = ft_split(argv[1], argv[2]);
	printf("Size of tabs: %d\n", ft_get_size(argv[1], argv[2]));
	int i = 0;
	char *c =split[0];
	while (split != NULL && split[i])
	{
		printf("----------------\n'%s'\n--------------", split[i]);
		free(split[i]);
		i++;
	}

	free(split);
	return (0);
}
*/

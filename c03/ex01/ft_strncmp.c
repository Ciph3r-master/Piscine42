/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:06:43 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/12 09:53:39 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include"string.h"
#include <stdlib.h>
#include "stdio.h"

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d \n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d \n", strncmp(argv[1], argv[2], atoi(argv[3])));

}*/

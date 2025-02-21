/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:39:36 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/18 13:52:27 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return ((void *) 0);
	size = (max - min);
	range = (int *) malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	while ((min + i) < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;

	int	*c;
	int	min;
	int	max;
	int	i;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	c = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", c[i]);
		i++;
	}
	

	free(c);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 18:07:30 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/18 13:54:19 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while ((min + i) < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;

	int	size;
	int	*range;
	int	min;
	int	max;
	int	i;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = ft_ultimate_range(&range, min, max);
	i = 0;

	printf("Size : %d\n\n\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/

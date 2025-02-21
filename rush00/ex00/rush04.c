/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccourant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:50:08 by ccourant          #+#    #+#             */
/*   Updated: 2024/07/07 21:26:49 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_top(int x, int i)
{
	if (i == 0)
		ft_putchar('A');
	else if (i == x - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	ft_print_bottom(int x, int i)
{
	if (i == 0)
		ft_putchar('C');
	else if (i == x - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	ft_print(int x, int y, int i, int j)
{
	if (j == 0)
		ft_print_top(x, i);
	else if (j == y - 1)
		ft_print_bottom(x, i);
	else
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_print(x, y, i, j);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}

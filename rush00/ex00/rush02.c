/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccourant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:46:09 by ccourant          #+#    #+#             */
/*   Updated: 2024/07/07 21:52:04 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	haut(int a, int x)
{
	if (a == 0 || a == x - 1)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	bas(int a, int x)
{
	if (a == 0 || a == x - 1)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	milieu(int a, int x)
{
	if (a == 0 || a == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	test(int a, int b, int x, int y)
{
	if (b == 0)
	{
		haut(a, x);
	}
	else if (b == y - 1)
	{
		bas(a, x);
	}
	else
	{
		milieu(a, x);
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			test(a, b, x, y);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}

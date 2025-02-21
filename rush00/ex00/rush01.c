/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccourant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:50:18 by ccourant          #+#    #+#             */
/*   Updated: 2024/07/07 22:37:14 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	haut(int a, int x)
{
	if (a == 0)
		ft_putchar('/');
	else if (a == x - 1)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	milieu(int a, int x)
{
	if (a == 0 || a == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	bas(int a, int x)
{
	if (a == 0)
		ft_putchar('\\');
	else if (a == x - 1)
		ft_putchar('/');
	else
		ft_putchar('*');
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

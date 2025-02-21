/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccourant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:52:29 by ccourant          #+#    #+#             */
/*   Updated: 2024/07/07 21:31:33 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_middle(int a, int b, int x, int y)
{
	if (b != 0 && b != y - 1)
	{
		if (a == 0 || a == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	ft_print_other_line(int a, int b, int x, int y)
{
	if (b == 0 || b == y - 1)
	{
		if (a == 0)
			ft_putchar('A');
		else if (a == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x <= 0 || y <= 0)
		return ;
	b = 0;
	while (b < y)
	{
		a = 0;
		while (a < x)
		{
			ft_print_middle(a, b, x, y);
			ft_print_other_line(a, b, x, y);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}

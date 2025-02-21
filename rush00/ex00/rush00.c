/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsage <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:59:23 by rsage             #+#    #+#             */
/*   Updated: 2024/07/07 21:31:53 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_square(int x, int y, int a, int b)
{
	if (b == 0 || b == y -1)
	{
		if (a == 0 || a == x -1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (a == 0 || a == x -1)
			ft_putchar ('|');
		else
			ft_putchar (' ');
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
			print_square(x, y, a, b);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}

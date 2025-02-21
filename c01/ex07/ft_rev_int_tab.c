/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:19:13 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/04 19:36:19 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_printtab(int	*tab, int size)
{
	int	i;
	char	c;

	i = 0;
	while(i < size)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}*/
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*int	main(void)
{
	int tab[5] = {5,4,3,2,1};

	ft_printtab(tab);
	write(1, "\n", 1);
	
	ft_rev_int_tab(tab, 5);
	ft_printtab(tab);
	ft_rev_int_tab(tab, 5);
	return (0);
}
*/

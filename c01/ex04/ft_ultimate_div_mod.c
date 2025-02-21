/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:09:30 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/04 10:39:55 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a;
	*a = div / *b;
	*b = div % *b;
}

/*int	main(void)
{
	int	a = 17;
	int	b = 23;

	printf("Div : %d | Mod :  %d", a, b);
	ft_ultimate_div_mod(&a, &b);	
	printf("Div : %d | Mod :  %d", a, b);

	return 0;
}*/

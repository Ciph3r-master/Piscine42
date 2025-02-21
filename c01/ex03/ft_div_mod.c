/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:54:39 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/04 10:06:33 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div = 0;
	int	mod = 0;

	ft_div_mod(17, 7, &div, &mod);
	printf("division %d, modulo %d \n", div, mod);


	return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:29:00 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/08 13:51:19 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[80] = "TOUT EST EN MAJ ah non tout est en minuscule enfin je crois";

	printf("%s\n", ft_strlowcase(str));

	return (0);
}
*/

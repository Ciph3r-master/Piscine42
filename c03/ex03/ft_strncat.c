/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:15:37 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/10 21:04:41 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i] && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest);
}

/*
int	main(void)
{
	char dest[50] = "Hello world";
	char src[50] = "Bonjour monde";
	printf("%s\n",ft_strncat(dest, src, 6));
}
*/

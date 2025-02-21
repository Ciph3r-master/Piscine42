/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:59:29 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/08 21:27:11 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i])
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
	char dest[30] = "Hello";
	char src[30] = " World !";
	
	printf("%s\n", ft_strcat(dest, src));
	return 0;
}
*/

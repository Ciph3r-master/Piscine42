/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:15:01 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/11 14:23:28 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest_len + src_len);
}

/*
int	main(void)
{
	char	src[30] = "World";
	char	dest[30] = "Hello";

	int	l = ft_strlcat(dest,src,15);
	printf("%d %s \n", l, dest);
}
*/

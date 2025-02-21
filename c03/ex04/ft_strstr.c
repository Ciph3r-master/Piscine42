/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:15:35 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/10 18:14:15 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[i] && !str[i])
		return ("");
	if (!to_find[i])
		return (str);
	while (str[i] && to_find[j])
	{
		j = 0;
		while (str[i + j] && to_find[j]
			&& str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return ((void *)0);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n",ft_strstr( argv[1], argv[2]));
	return 0;
}
*/

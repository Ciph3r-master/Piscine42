/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:20:44 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/08 15:58:22 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_lowcase(str);
	while (str[i])
	{
		if (j == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			j = 0;
		else if (str[i] >= 'a' && str[i] <= 'z')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/

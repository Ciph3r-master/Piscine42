/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qutruche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:21:17 by qutruche          #+#    #+#             */
/*   Updated: 2024/07/21 14:22:07 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN(nbr) even(nbr)
# include <unistd.h>

typedef enum e_bool
{
	FALSE = 0,
	TRUE = 1
}	t_bool;

int	even(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	return (0);
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjooris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:45:55 by tjooris           #+#    #+#             */
/*   Updated: 2024/07/14 22:53:17 by qutruche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

short int	view_col(char **matrix, int x, int size);
short int	view_col_invert(char **matrix, int x, int size);
short int	view_line_invert(char *line);
short int	view_line(char *line);
void		print_matrix(char **matrix);
int			solve(char **tab, int col, int row, char **bord);
void		ft_putstr(char *str);
void		ft_printerr(void);
int			ft_strlen(char *str);
char		**create_border(char *params);
void		free_border(char **border);
char		**create_mat(void);
void		free_mat(char **mat);
void		print_matrix(char **matrix);

#endif

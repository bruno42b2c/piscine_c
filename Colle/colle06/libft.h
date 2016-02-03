/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 09:44:06 by mbenyahi          #+#    #+#             */
/*   Updated: 2016/02/02 09:44:11 by mbenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_nb_to_str_len(int nb);
char	*ft_int_to_str(int nb);
int		eval_expr(char *str);
int		eval_expr_prof(char *str);
int		get_total(int *tab_nbr, int *tab_op, int count[]);
int		rang(int c);
int		operation(int a, int b, int c);
int		*get_op(char *str, int count[]);
int		rech_str_entre_parenth(char *str, int *deb, int *fin);
char	*get_string(char *str, int deb, int fin);
char	*maj_formule(char *str, int deb, int fin, int total);
int		operateur(char c);
void	count_nb_and_op(char *str, int count[]);
int		*get_nbr(char *str, int count[]);

#endif

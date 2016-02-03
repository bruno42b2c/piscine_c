/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 09:43:05 by mbenyahi          #+#    #+#             */
/*   Updated: 2016/02/02 09:45:48 by mbenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*maj_formule(char *str, int deb, int fin, int total)
{
	int		i;
	char	*new_str;
	int		new_length;
	int		k;

	new_length = ft_strlen(str) - (fin - deb + 1) + ft_nb_to_str_len(total) + 1;
	new_str = malloc(sizeof(char) * new_length);
	i = 0;
	while (str[i] && i <= deb - 1)
	{
		new_str[i] = str[i];
		i++;
	}
	k = i;
	i = 0;
	while (i < ft_nb_to_str_len(total))
		new_str[k++] = ft_int_to_str(total)[i++];
	i = fin;
	while (str[i + 1])
		new_str[k++] = str[(i++) + 1];
	new_str[k] = '\0';
	return (new_str);
}

int		get_total(int *tab_nbr, int *tab_op, int count[])
{
	int	i;
	int	total;

	i = 0;
	while (i < count[1])
	{
		if (rang(tab_op[i]) == 2)
		{
			tab_nbr[i] = operation(tab_nbr[i], tab_nbr[i + 1], tab_op[i]);
			tab_nbr[i + 1] = 0;
			tab_op[i] = operateur('+');
		}
		i++;
	}
	total = tab_nbr[0];
	i = 0;
	while (i < count[1])
	{
		total = operation(total, tab_nbr[i + 1], tab_op[i]);
		i++;
	}
	return (total);
}

int		eval_expr_prof(char *str)
{
	int	*tab_nbr;
	int	*tab_op;
	int	count[2];
	int	total;

	tab_nbr = get_nbr(str, count);
	tab_op = get_op(str, count);
	total = get_total(tab_nbr, tab_op, count);
	return (total);
}

int		eval_expr(char *str)
{
	char	*parent;
	int		mid_result;
	int		deb;
	int		fin;

	while (rech_str_entre_parenth(str, &deb, &fin))
	{
		parent = get_string(str, deb, fin);
		mid_result = eval_expr_prof(parent);
		str = maj_formule(str, deb - 1, fin + 1, mid_result);
	}
	parent = str;
	deb = 0;
	fin = ft_strlen(str);
	mid_result = eval_expr_prof(parent);
	return (mid_result);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}

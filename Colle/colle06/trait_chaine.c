/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trait_chaine.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 09:44:21 by mbenyahi          #+#    #+#             */
/*   Updated: 2016/02/02 11:26:45 by mbenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_string(char *str, int deb, int fin)
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = (char*)malloc(sizeof(char) * (fin - deb + 1));
	while (deb <= fin)
	{
		new_str[i] = str[deb];
		i++;
		deb++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int		rech_str_entre_parenth(char *str, int *deb, int *fin)
{
	int	i;
	int	flag_par;

	i = 0;
	*deb = 0;
	*fin = 0;
	flag_par = 0;
	while (str[i])
	{
		if (str[i] == '(')
		{
			*deb = i + 1;
			flag_par = 1;
		}
		if (str[i] == ')')
		{
			*fin = i - 1;
			break ;
		}
		i++;
	}
	return (flag_par);
}

int		*get_op(char *str, int count[])
{
	int	nb_op;
	int	i;
	int	*tab_op;

	count_nb_and_op(str, count);
	tab_op = (int*)malloc(sizeof(int) * (count[1]));
	i = 0;
	nb_op = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '/'
				|| str[i] == '*' || str[i] == '%')
		{
			tab_op[nb_op] = operateur(str[i]);
			nb_op++;
		}
		i++;
	}
	return (tab_op);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 09:43:21 by mbenyahi          #+#    #+#             */
/*   Updated: 2016/02/02 11:30:30 by mbenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	count_nb_and_op(char *str, int count[])
{
	int i;
	int flag_space;

	i = 0;
	count[0] = 0;
	count[1] = 0;
	flag_space = 1;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '/'
				|| str[i] == '*' || str[i] == '%')
		{
			count[1]++;
			flag_space = 1;
		}
		if (str[i] == ' ')
			flag_space = 1;
		if (str[i] >= '0' && str[i] <= '9' && flag_space)
		{
			count[0]++;
			flag_space = 0;
		}
		i++;
	}
}

int		*get_nbr(char *str, int count[])
{
	int nb_nbr;
	int i;
	int current_nb;
	int *tab_nbr;

	count_nb_and_op(str, count);
	tab_nbr = (int*)malloc(sizeof(int) * count[0]);
	i = 0;
	nb_nbr = 0;
	current_nb = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			current_nb = (current_nb * 10) + str[i] - 48;
			if (str[i + 1] < '0' || str[i + 1] > '9' || str[i + 1] == '\0')
			{
				tab_nbr[nb_nbr] = current_nb;
				nb_nbr++;
				current_nb = 0;
			}
		}
		i++;
	}
	return (tab_nbr);
}

int		operation(int a, int b, int c)
{
	if (c == operateur('+'))
		return (a + b);
	if (c == operateur('-'))
		return (a - b);
	if (c == operateur('/'))
		return (a / b);
	if (c == operateur('*'))
		return (a * b);
	if (c == operateur('%'))
		return (a % b);
	return (0);
}

int		operateur(char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (2);
	if (c == '/')
		return (3);
	if (c == '*')
		return (4);
	if (c == '%')
		return (5);
	return (0);
}

int		rang(int c)
{
	if (c == operateur('+') || c == operateur('-'))
		return (1);
	if (c == operateur('*') || c == operateur('/')
			|| c == operateur('%'))
		return (2);
	return (0);
}

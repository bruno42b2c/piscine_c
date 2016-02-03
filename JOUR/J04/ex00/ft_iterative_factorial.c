/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 17:27:06 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/02 15:20:58 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 0;
	fact = 0;
	if (i <= nb)
	{
		fact = fact * (nb - 1);
		i++;
		ft_iterative_factorial(i);
	}
	else
	{
	return (0);
	}
	return (0);
}

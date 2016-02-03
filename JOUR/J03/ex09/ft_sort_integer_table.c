/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 17:32:50 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/28 17:19:24 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int *p;
	int min;

	i = 0;
	p = tab;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (p[i] <= p[j])
			{
				min = p[j];
				p[j] = p[i];
				p[i] = min;
			}
			j++;
		}
		i++;
	}
}

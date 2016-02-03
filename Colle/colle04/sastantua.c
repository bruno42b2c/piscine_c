/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlecalve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 11:32:37 by tlecalve          #+#    #+#             */
/*   Updated: 2016/01/12 18:14:19 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putnchar(char c, int n);

void ft_putline1(int col, int colmax)
{
	ft_putnchar(' ', (colmax - col) / 2);
	ft_putchar('/');
	ft_putnchar('*', col);
	ft_putchar('\\');
}

void	sastantua(int size)
{
	int i;
	int k;
	int last_l;
	
	i 		= 1;
	last_l 	= 3;	
	while(i <= size)
	{
	k = 1;	
	while(k <= last_l)
	{
		if (i == 1)
		{	
		last_l = 3;
		}	
	ft_putline1(k,size);
	ft_putchar('\n');
	k++;
	last_l++;
	}
		i++;
	}
}

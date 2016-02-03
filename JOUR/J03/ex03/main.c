/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 12:06:05 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/29 11:05:30 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putnbr(char c);

void	ft_putchar(char c);

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int nb1;
	int nb2;
	int div1;
	int mod1;

	nb1 =45 ;
	nb2 = 0;
	ft_div_mod(nb1,nb2,&div1,&mod1);
	ft_putchar('a');
	ft_putchar('=');
	ft_putnbr(nb1);
	ft_putchar('\n');
	ft_putchar('b');
	ft_putchar('=');
	ft_putnbr(nb2);
	ft_putchar('\n');
	printf(" div  %d \n",div1); 
	ft_putchar('\n');
	printf(" mod  %d \n",mod1); 
}

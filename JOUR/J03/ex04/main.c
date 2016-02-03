/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 12:06:05 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/21 13:41:46 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putnbr(char c);

void	ft_putchar(char c);

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int nb1;
	int nb2;

	nb1 =45 ;
	nb2 = 4;
	ft_ultimate_div_mod(&nb1,&nb2);
	ft_putchar('a');
	ft_putchar('=');
	ft_putnbr(nb1);
	printf(" adr nb1 %p \n",&nb1); 
	ft_putchar('\n');
	ft_putchar('b');
	ft_putchar('=');
	ft_putnbr(nb2);
	printf(" adr nb2 %p \n",&nb2); 
}

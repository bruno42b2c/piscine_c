/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 18:00:36 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/21 15:48:53 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putnbr(char c);

void	ft_putchar(char c);

void	ft_swap(int *a, int *b);

int		main(void)
{
	int nb1;
	int nb2;
	nb1 = 40;
	nb2 = 90;
	ft_putchar('A');
	ft_putchar('=');
	ft_putnbr(nb1);
	printf(" adr nb1 %p \n",&nb1); 
	ft_putchar('\n');
	ft_putchar('B');
	ft_putchar('=');
	ft_putnbr(nb2);
	printf(" adr nb2 %p \n",&nb2); 
	ft_putchar('\n');
	ft_swap(&nb1,&nb2);
	ft_putchar('A');
	ft_putchar('=');
	ft_putnbr(nb1);
	printf(" adr nb1 %p \n",&nb1); 
	ft_putchar('\n');
	ft_putchar('B');
	ft_putchar('=');
	ft_putnbr(nb2);
	printf(" adr nb2 %p \n",&nb2); 
}

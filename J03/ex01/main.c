/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 17:01:24 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/14 18:32:28 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int n;
	n = 876;
	ft_putnbr(n);
	ft_putchar('\n');
	ft_ft(&n);
	ft_putnbr(n);
	return (0);
}

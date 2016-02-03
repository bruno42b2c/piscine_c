/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 11:47:02 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/07 17:54:48 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int			i;
	long long	tmp;
	int			tab1[11];

	i = 0;
	tmp = nb;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		tmp = -tmp;
		ft_putchar('-');
	}
	while (tmp > 0)
	{
		tab1[i] = tmp % 10;
		tmp = tmp / 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(tab1[i] + '0');
}

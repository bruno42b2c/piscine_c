/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 12:06:05 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/29 15:02:24 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char  *str);

int		main(int argc, int **argv)
{
	int nb;
	char str[] = " 4655552 ";
	printf("avant fonction = %s\n",str); 
	nb = ft_atoi(str);
	printf(" apre fonction = %d\n",nb); 
}


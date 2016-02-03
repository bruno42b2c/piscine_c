/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 17:34:39 by bmorvan           #+#    #+#             */
/*   Updated: 2016/02/02 15:22:16 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_iterative_factorial(int nb);

int		main(int argc, char **argv)
{
	int nb1;
	int charnb1;

	nb1 = 4;
	printf("avant fonction = %d\n",nb1);
	charnb1 = ft_iterative_factorial(nb1);
	printf(" apre fonction = %d\n",charnb1); 
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 12:06:05 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/28 19:36:08 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int size1;
	int j;
	j = 0;
	//int tab1[7] = {12,5,0,3,1,7,9};
	//size1 = 7;
	//int tab1[1] = {12};
	//size1 = 1;
	//int tab1[1] = {0};
	//size1 = 1;
	int tab1[12] = {12,5,0,3,1,7,9,6,6,6,6,6};
	size1 = 12;
	printf("avant fonction : table= %d  size = %d\n", *tab1,size1); 
	ft_sort_integer_table(tab1, size1);
	while (j < size1)
	{
	printf("tab %d  = %d\n", j, tab1[j]);
   j++;
	}   
}

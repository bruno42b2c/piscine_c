/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 12:17:18 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/26 17:22:25 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char 	*s1, char 	*s2);

int	main(void)
{
	int retour;

	char s1[] = "mainc";
	char s2[] = "*c";
	printf("chaine 1 = %s\n",s1);
	printf("chaine 2 = %s\n",s2);
	retour = match(s1,s2);
	printf("retour = %d\n",retour);
}

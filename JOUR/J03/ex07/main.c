/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 12:06:05 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/25 11:39:08 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char str[] = "salut au groupe M6";
	printf("ft_strrev anvant fonction = %s\n",str); 
	ft_strrev(str);
	printf("ft_strrev apre fonction = %s\n",str); 
}


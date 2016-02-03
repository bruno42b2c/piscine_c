/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 12:06:05 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/22 13:27:24 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char	chaine[ ] = "Salut Monsieur le capitaine haddock";

	ft_putstr(chaine);
	printf(" adr chaine =  %p \n",&chaine); 
}

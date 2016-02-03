/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenyahi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 09:43:39 by mbenyahi          #+#    #+#             */
/*   Updated: 2016/02/02 11:40:20 by mbenyahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_int_to_str(int nb)
{
	char	*str_int;
	char	*ptr;
	int		i;

	i = ft_nb_to_str_len(nb);
	str_int = malloc(sizeof(char) * (i + 1));
	if (i > 0)
		str_int[i] = '\0';
	while (i > 0)
	{
		str_int[i - 1] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	ptr = str_int;
	return (ptr);
}

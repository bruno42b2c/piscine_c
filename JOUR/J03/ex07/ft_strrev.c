/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmorvan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 10:02:27 by bmorvan           #+#    #+#             */
/*   Updated: 2016/01/25 11:39:15 by bmorvan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen1(char *str)
{
	char	*p;
	int		len;

	len = 0;
	p = str;
	while (*p)
	{
		len++;
		p++;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	char	*debut;
	char	*fin;
	char	tmp;

	debut = str;
	fin = str + ft_strlen1(str) - 1;
	while (debut < fin)
	{
		tmp = *debut;
		*debut = *fin;
		*fin = tmp;
		debut++;
		fin--;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:04:55 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 22:06:53 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	target;
	size_t			i;

	target = (char)c;
	if (target == '\0')
	{
		i = ft_strlen(s);
		return ((char *)&s[i]);//aritmetica dei puntatori "parti da s e vai avanti di tot caselle", cosi' non si ferma prima del \0. Il cast a char perche' senno' viene fuori un int
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == target)
			return ((char *)&s[i]);//perche' e' const, ma la funzione vuole un char*
		i++;
	}
	return (NULL);//se non c'e' ricorrenza di c in s
}

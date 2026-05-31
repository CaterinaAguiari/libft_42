/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 21:55:28 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 21:57:01 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	j = 0;
	b = (char *)big;
	l = (char *)little;
	if (l[0] == '\0')//se little e' vuota, ritorni big
		return (b);
	while (b[j] != '\0' && j < len)//scorri big, ma senza superare il limite
	{
		i = 0;
		while ((i + j) < len && b[i + j] == l[i])//confronto carattere per carattere senza superare il limite
		{
			if (l[i + 1] == '\0')//Se il carattere successivo di little è il finale, il match è completo
				return (&b[j]);
			i++;
		}
		j++;//vai avanti in big andando alla lettera successiva
	}
	return (NULL);
}

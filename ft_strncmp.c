/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:03:46 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 22:04:23 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])//Se i caratteri sono diversi (incluso il caso in cui una stringa è finita e l'altra no), restituisce immediatamente la differenza corretta con il casting a unsigned char
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')//Se siamo arrivati qui, significa che s1[i] == s2[i]. Se s1[i] è \0, significa che anche s2[i] è \0. Le stringhe sono identiche e sono finite, quindi restituisce 0
			return (0);
		i++;
	}
	return (0);//serve nel caso hai 2 stringhe uguali, ma "n" piu' corto di loro, oppure in cui i = 0 n = 0 0 < 0 e' falso. Salta tutto il while e va diretto qui
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 21:49:53 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 21:52:44 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	d = malloc (len + 1);
	if (d == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		d[i] - s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

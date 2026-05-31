/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 00:55:48 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/29 13:54:07 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb <= 0)
	{
		count++;
		if (nb < 0)
			nb = -nb;
	}
	while (nb > 0)
	{
		count++;
		nb = nb / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		count;

	count = ft_count(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	if (n == 0)
		str[0] = '0';
	nb = n;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--count] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

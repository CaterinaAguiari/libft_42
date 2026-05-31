/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:08:12 by caguiari          #+#    #+#             */
/*   Updated: 2026/05/28 22:08:38 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	target;

	target = (unsigned char)c;
	if (target >= 97 && target <= 122)
	{
		target = (target - 32);
		return (target);
	}
	else
		return (target);
}

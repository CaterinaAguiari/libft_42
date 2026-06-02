/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:26:58 by caguiari          #+#    #+#             */
/*   Updated: 2026/06/01 12:33:08 by caguiari         ###   ########.fr       */
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

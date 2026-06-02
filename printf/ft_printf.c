/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caguiari <caguiari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:43:44 by caguiari          #+#    #+#             */
/*   Updated: 2026/06/02 15:51:31 by caguiari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	ft_container;
	va_start(ft_container, format);
	printf("%d", va_arg(ft_container, int));
	printf("%s", va_arg(ft_container, char*));
	va_end(ft_container);
	return (0);
}

int	main(void)
{
	ft_printf("", 42, "stringa");
}
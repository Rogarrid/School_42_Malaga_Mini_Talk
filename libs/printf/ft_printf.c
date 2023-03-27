/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:00:53 by rocio             #+#    #+#             */
/*   Updated: 2022/11/02 11:50:19 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *string, ...)
{
	va_list	arguments;
	size_t	length;

	length = 0;
	va_start (arguments, string);
	while (*string)
	{
		if (*string && *string != '%')
		{
			write (1, (char *)string, 1);
			length++;
		}
		if (*string == '%')
		{
			string++;
			ft_filter_conver((char *)string, arguments, &length);
		}
		string++;
	}
	va_end (arguments);
	return (length);
}

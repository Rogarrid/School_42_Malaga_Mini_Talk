/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter_conver.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:01:17 by rocio             #+#    #+#             */
/*   Updated: 2022/11/02 11:45:29 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Filter the conversion give by the function ft_printf, to print it by the
//correct function and count its length.

#include "ft_printf.h"

void	ft_filter_conver(char *string, va_list arguments, size_t *length)
{
	if (*string == 'c')
		ft_putchar_length(va_arg(arguments, int), length);
	if (*string == 's')
		ft_strchr_length(va_arg(arguments, char *), length);
	if (*string == 'p')
		ft_puthex_length(va_arg(arguments, unsigned long long), length);
	if (*string == 'i' || *string == 'd')
		ft_putnbr_length(va_arg(arguments, int), length);
	if (*string == 'x')
		ft_lowercase_hex(va_arg(arguments, unsigned int), length);
	if (*string == 'X')
		ft_uppercase_hex(va_arg(arguments, unsigned int), length);
	if (*string == 'u')
		ft_putnbr_unsig_length(va_arg(arguments, unsigned int), length);
	if (*string == '%')
		ft_putcharporcent_length(length);
}

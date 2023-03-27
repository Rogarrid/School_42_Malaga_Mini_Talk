/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:52:01 by rocio             #+#    #+#             */
/*   Updated: 2022/10/26 09:05:59 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Print a integral number and decimal number in base 10, count the lenght.
#include "ft_printf.h"

void	ft_putnbr_length(int number, size_t *length)
{
	if (number == -2147483648)
	{
		ft_putchar_length('-', length);
		ft_strchr_length("2147483648", length);
	}
	else if (number < 0)
	{
		ft_putchar_length('-', length);
		ft_putnbr_length(-number, length);
	}
	else
	{
		if (number > 9)
			ft_putnbr_length(number / 10, length);
		ft_putchar_length('0' + number % 10, length);
	}
}

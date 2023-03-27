/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig_length.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:53:10 by rocio             #+#    #+#             */
/*   Updated: 2022/10/26 09:06:04 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Print a unsigned integral number and decimal number in base 10,
//count the lenght.
#include "ft_printf.h"

void	ft_putnbr_unsig_length(unsigned int number, size_t *length)
{
	if (number > 9)
		ft_putnbr_length(number / 10, length);
	ft_putchar_length('0' + number % 10, length);
}

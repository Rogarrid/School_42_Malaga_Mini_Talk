/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uppercase_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:11:05 by rocio             #+#    #+#             */
/*   Updated: 2022/11/02 11:42:31 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert the letter of an integral number in base hexadecimal in uppercase
//and count the legth.

#include "ft_printf.h"

void	ft_uppercase_hex(unsigned int direction, size_t *length)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (direction >= 16)
		ft_uppercase_hex(direction / 16, length);
	direction %= 16;
	write(1, &base[direction], 1);
	(*length)++;
}

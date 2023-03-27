/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowercase_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:09:10 by rocio             #+#    #+#             */
/*   Updated: 2022/11/02 11:31:21 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert the letter of an integral number in base hexadecimal in lowercase
//and count the legth.

#include "ft_printf.h"

void	ft_lowercase_hex(unsigned int direction, size_t *length)
{
	char	*base;

	base = "0123456789abcdef";
	if (direction >= 16)
		ft_conver_base_hexa(direction / 16, length);
	direction %= 16;
	write(1, &base[direction], 1);
	(*length)++;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:39:02 by rocio             #+#    #+#             */
/*   Updated: 2022/11/02 11:04:32 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Print the pointer *void given as argument in base hexadecimal and count
//the lenght.

#include "ft_printf.h"

void	ft_puthex_length(unsigned long long direction, size_t *length)
{
	write (1, "0x", 2);
	*length += 2;
	ft_conver_base_hexa(direction, length);
}

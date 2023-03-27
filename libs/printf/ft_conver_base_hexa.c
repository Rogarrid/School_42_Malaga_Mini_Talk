/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_base_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:44:03 by rocio             #+#    #+#             */
/*   Updated: 2022/11/02 11:08:12 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert in base hexadecimal.

#include "printf.h"
#include <unistd.h>

void	ft_conver_base_hexa(unsigned long long direction, size_t *length)
{
	char	*base;

	base = "0123456789abcdef";
	if (direction >= 16)
		ft_conver_base_hexa(direction / 16, length);
	direction %= 16;
	write(1, &base[direction], 1);
	(*length)++;
}

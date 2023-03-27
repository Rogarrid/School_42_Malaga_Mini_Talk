/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:57:18 by rocio             #+#    #+#             */
/*   Updated: 2022/10/26 09:42:14 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Print the character given for the conversion count the lenght.

#include "ft_printf.h"

void	ft_putchar_length(int character, size_t *length)
{
	write (1, &character, 1);
	(*length)++;
}

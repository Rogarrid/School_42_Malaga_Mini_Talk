/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharporcent_length.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:49:18 by rocio             #+#    #+#             */
/*   Updated: 2022/10/26 09:44:31 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Print the character "%" given and count the lenght.

#include "ft_printf.h"

void	ft_putcharporcent_length(size_t *length)
{
	int	porcent;

	porcent = '%';
	write (1, &porcent, 1);
	(*length)++;
}

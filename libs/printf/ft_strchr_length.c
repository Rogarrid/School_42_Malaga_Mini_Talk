/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:18:20 by rocio             #+#    #+#             */
/*   Updated: 2022/10/26 09:49:51 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Print the string given and count the lenght.

#include "ft_printf.h"

void	ft_strchr_length(char *string, size_t *length)
{
	if (!string)
		string = "(null)";
	while (*string)
	{
		write (1, (char *)string, 1);
		string++;
		(*length)++;
	}
}

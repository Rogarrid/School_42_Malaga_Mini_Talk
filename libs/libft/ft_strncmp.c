/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:15:12 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 11:49:26 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compare the n frist bytes of string1 with string2, and return integer
//positive, negative or cero.
#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t numb_bytes)
{
	size_t	counter;

	if (numb_bytes == 0)
		return (0);
	counter = 0;
	while (string1[counter] && string2[counter]
		&& string1[counter] == string2[counter] && counter < numb_bytes - 1)
		counter++;
	return ((unsigned char)string1[counter] - (unsigned char)string2[counter]);
}

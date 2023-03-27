/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:34:56 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/05 17:57:13 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compared the first number bytes (each interpreted as unsigned char) of the
//memory areas string1 and string2.
#include "libft.h"

int	ft_memcmp(const void *string1, const void *string2, size_t numb_bytes)
{
	size_t	counter;

	counter = 0;
	while (counter < numb_bytes)
	{
		if (*((unsigned char *) string1 + counter)
			!= *((unsigned char *) string2 + counter))
			return ((*((unsigned char *) string1 + counter))
				- *((unsigned char *) string2 + counter));
		counter++;
	}
	return (0);
}

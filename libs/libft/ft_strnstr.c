/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:39:01 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 12:09:18 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Find the little string in the big string inside of the length given. Return
// Null if the little string isn't in the big string, return the big string if
// little string is empty or return the string to search for if it is in the
// big string.
#include "libft.h"

char	*ft_strnstr(const char *str_big, const char *str_little, size_t length)
{
	unsigned int	position;
	unsigned int	counter;

	if (!*str_little)
		return ((char *)str_big);
	position = 0;
	while (str_big[position] && (size_t)position < length)
	{
		if (str_big[position] == str_little[0])
		{
			counter = 1;
			while (str_little[counter]
				&& str_big[position + counter] == str_little[counter]
				&& (size_t)(position + counter) < length)
				counter++;
			if (str_little[counter] == '\0')
				return ((char *)&str_big[position]);
		}
		position++;
	}
	return (NULL);
}

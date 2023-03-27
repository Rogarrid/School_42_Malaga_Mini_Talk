/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:37:55 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 17:52:39 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Search the first number bytes poins out for the string pointer, searching the 
//character given. So much the string as character are interpreted as unsigned 
//char. Return an pointer where it is located the character.
#include "libft.h"

void	*ft_memchr(const void *string, int character, size_t number_bytes)
{
	size_t	counter;

	counter = 0;
	while (counter < number_bytes)
	{
		if (*((unsigned char *)string + counter) == (unsigned char) character)
			return ((void *) string + counter);
		counter++;
	}
	return (NULL);
}

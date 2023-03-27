/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:19:53 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 10:18:49 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies the size limit given from source pointer to the destination pointer.
//Ends the string in Null. Return the total size of the newly created string.
#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	size_source;
	size_t	position;

	size_source = 0;
	while (source[size_source] != '\0')
		size_source++;
	if (size == 0)
		return (size_source);
	position = 0;
	while (source[position] && position < (size - 1))
	{
		destination[position] = source[position];
		position++;
	}
	destination[position] = '\0';
	return (size_source);
}

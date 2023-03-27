/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:58:45 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 10:11:10 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Concatenate the destination pointer whith the source pointer. Ends the
// concatenation in Null. Return the total size of the two string concatenated.
#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size_dest)
{
	size_t	counter_source;
	size_t	counter_destination;
	size_t	destination_length;
	size_t	source_length;

	source_length = ft_strlen(source);
	destination_length = ft_strlen(destination);
	counter_destination = destination_length;
	counter_source = 0;
	if (destination_length < size_dest - 1 && size_dest > 0)
	{
		while (source[counter_source]
			&& destination_length + counter_source < size_dest - 1)
		{
			destination[counter_destination] = source[counter_source];
			counter_destination++;
			counter_source++;
		}
		destination[counter_destination] = '\0';
	}
	if (destination_length >= size_dest)
		destination_length = size_dest;
	return (destination_length + source_length);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:18:41 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:14:15 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies the byte length of the source pointer in the destination pointer.
//It can superposition.
#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t length)
{
	size_t	position;

	position = 0;
	if (destination == source || !length)
		return (destination);
	if (destination > source)
	{
		while (length > 0)
		{
			*((char *) destination + length - 1)
				= *((char *) source + length - 1);
			length--;
		}
	}
	else
	{
		while (position < length)
		{
			*((char *) destination + position) = *((char *) source + position);
			position++;
		}
	}
	return (destination);
}

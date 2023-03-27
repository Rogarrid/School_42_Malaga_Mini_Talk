/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:18:55 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:16:03 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies the given character to the frist n characters of the string.
#include "libft.h"

void	*ft_memset(void *string, int character, size_t number_bytes)
{
	size_t	position;

	position = 0;
	while (position < number_bytes)
	{
		*((unsigned char *) string + position) = character;
		position++;
	}
	return (string);
}

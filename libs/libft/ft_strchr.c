/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:19:18 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/11 13:10:14 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Search the character given in the string and return pointer where the
//character appeare for frist time. If it isn't find return Null.
#include "libft.h"

char	*ft_strchr(const char *string, int character)
{
	char	character_found;
	int		counter;

	character_found = (unsigned char)character;
	counter = 0;
	while (string [counter])
	{
		if (string[counter] == character_found)
			return ((char *)string + counter);
		counter++;
	}
	if (string[counter] == character_found)
		return ((char *)string + counter);
	return (NULL);
}

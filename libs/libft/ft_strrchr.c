/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:20:25 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 11:30:17 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Search the character given in the string and return pointer where the
//character appeare for last time. If it isn't find return Null.
#include "libft.h"

char	*ft_strrchr(const char *string, int character)
{
	char	*last;
	char	find_character;
	size_t	length_string;

	last = (char *)string;
	find_character = (char)character;
	length_string = ft_strlen(string);
	while (length_string > 0)
	{
		if (last[length_string] == find_character)
			return (last + length_string);
		length_string--;
	}
	if (last[length_string] == find_character)
		return (last);
	return (NULL);
}

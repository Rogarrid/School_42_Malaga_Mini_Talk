/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:26:23 by rocio             #+#    #+#             */
/*   Updated: 2022/10/13 10:40:24 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create an substring from to source string. "Start" indicates position where
//begin the substring and "lenght" indicate its lenght.

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t lenght)
{
	char			*sub_string;
	unsigned int	counter;
	size_t			string_length;

	string_length = ft_strlen(string);
	counter = 0;
	if (start >= string_length)
	{
		sub_string = (char *)ft_calloc(1, sizeof(char));
		if (!sub_string)
			return (NULL);
		return (sub_string);
	}
	if (string_length - start < lenght)
		lenght = string_length - start;
	sub_string = (char *)ft_calloc(lenght + 1, sizeof(char));
	if (!sub_string)
		return (NULL);
	while (string [start + counter] && counter < lenght)
	{
		sub_string[counter] = string[start + counter];
		counter++;
	}
	return (sub_string);
}

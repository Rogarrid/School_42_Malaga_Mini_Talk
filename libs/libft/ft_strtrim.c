/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:53:39 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 11:41:28 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Removes the characters in the string "set" from the beginning and end of
//string_1.
#include "libft.h"

char	*ft_strtrim(char const *string_1, char const *set)
{
	size_t	length_string;

	if (!string_1 || !set)
		return (NULL);
	while (*string_1 && ft_strchr(set, *string_1))
		string_1++;
	length_string = ft_strlen(string_1);
	while (length_string && ft_strchr(set, string_1[length_string]))
		length_string--;
	return (ft_substr(string_1, 0, length_string + 1));
}

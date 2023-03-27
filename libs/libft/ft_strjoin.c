/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:01:03 by rocio             #+#    #+#             */
/*   Updated: 2022/10/11 14:14:45 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create new string with the concatenation of the string_1 and string_2.
#include "libft.h"

char	*ft_strjoin(char const *string_1, char const *string_2)
{
	char	*new_string;
	size_t	counter;
	size_t	length_new_string;

	length_new_string = ft_strlen(string_1) + ft_strlen(string_2) + 1;
	new_string = (char *)ft_calloc(sizeof(*new_string), (length_new_string));
	if (!string_1 || !string_2 || !new_string)
		return (NULL);
	counter = 0;
	while (*string_1)
		new_string[counter++] = *string_1++;
	while (*string_2)
		new_string[counter++] = *string_2++;
	return (new_string);
}

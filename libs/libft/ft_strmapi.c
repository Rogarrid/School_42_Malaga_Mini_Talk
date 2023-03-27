/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:53:57 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/05 09:08:54 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//To each character for the "string" the function is applied, giving as
//parameter the index of each character inside of the "string" and the
//own character. It's about creating a new "string" with the result of the
//successive use the "function".
#include "libft.h"

char	*ft_strmapi(char const *string, char (*function)(unsigned int, char))
{
	char	*new_string;
	size_t	counter;
	size_t	size;

	size = ft_strlen(string);
	new_string = (char *)ft_calloc(size + 1, sizeof(char));
	if (!new_string || !string || !function)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		new_string[counter] = (*function)(counter, string[counter]);
		counter++;
	}
	new_string[counter] = '\0';
	return (new_string);
}

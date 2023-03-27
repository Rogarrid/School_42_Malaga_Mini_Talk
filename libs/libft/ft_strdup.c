/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:02:34 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/11 13:19:00 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Duplicate an string in other.
#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*string_duplicate;
	size_t	size;

	size = ft_strlen(string) +1;
	string_duplicate = (char *)malloc(size);
	if (!string_duplicate)
		return (NULL);
	ft_memcpy(string_duplicate, string, size);
	return (string_duplicate);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:20:06 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:25:44 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calculates the length of a given string.
#include "libft.h"

size_t	ft_strlen(const char *string)
{
	size_t	length;

	length = 0;
	while (*string != '\0')
	{
		length++;
		string++;
	}
	return (length);
}

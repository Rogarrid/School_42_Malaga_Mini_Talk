/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:02:15 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/11 12:31:38 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert an int in char.
#include "libft.h"

size_t	ft_size_int(int number)
{
	size_t	size;

	size = 0;
	if (number > 0)
		size = 0;
	else
		size = 1;
	while (number)
	{
		number /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int number)
{
	char	*string;
	size_t	size;
	long	aux;

	size = ft_size_int(number);
	aux = number;
	if (number < 0)
		aux *= -1;
	string = (char *)malloc(size + 1 * sizeof(char));
	if (!string)
		return (NULL);
	*(string + size--) = '\0';
	while (aux > 0)
	{
		*(string + size--) = aux % 10 + '0';
		aux /= 10;
	}
	if (size == 0 && string[1] == '\0')
		*(string + size) = '0';
	else if (size == 0 && string[1])
		*(string + size) = '-';
	return (string);
}

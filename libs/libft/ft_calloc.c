/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:18:47 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 17:20:56 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates space of storage for an matrix of number items, each of size 
//bytes of length. Each element is inicilized in zero.
#include "libft.h"

void	*ft_calloc(size_t number_items, size_t size)
{
	void	*matrix;

	matrix = (void *)malloc(size * number_items);
	if (!matrix)
		return (NULL);
	ft_bzero(matrix, size * number_items);
	return (matrix);
}

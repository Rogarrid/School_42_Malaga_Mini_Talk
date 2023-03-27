/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:35:22 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 17:18:39 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Puts to zero the frist n bytes of the directation given.
#include "libft.h"

void	ft_bzero(void *directation_memory, size_t number_bytes)
{
	ft_memset(directation_memory, '\0', number_bytes);
}

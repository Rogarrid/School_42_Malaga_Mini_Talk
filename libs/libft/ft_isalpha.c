/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:10:14 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 17:47:48 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether a character is a alphabetic character or not.
#include "libft.h"

int	ft_isalpha(int character)
{
	if ((character < 'A') || (character > 'Z' && character < 'a')
		|| (character > 'z'))
		return (0);
	else
		return (1);
}

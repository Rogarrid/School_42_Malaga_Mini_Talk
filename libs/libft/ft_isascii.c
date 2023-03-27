/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:36:08 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 17:48:53 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether a argument is a ascii character(0-127) or not.
#include "libft.h"

int	ft_isascii(int character)
{
	if (character >= 0 && character <= 127)
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:21:00 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:34:35 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert given character to uppercase.
#include "libft.h"

int	ft_toupper(int character)
{
	if (character >= 'a' && character <= 'z')
		return (character - 32);
	else
		return (character);
}

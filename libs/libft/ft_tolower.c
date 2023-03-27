/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:20:40 by rogarrid          #+#    #+#             */
/*   Updated: 2022/09/28 18:33:31 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert given character to lowercase.
#include "libft.h"

int	ft_tolower(int character)
{
	if (character >= 'A' && character <= 'Z')
		return (character + 32);
	else
		return (character);
}

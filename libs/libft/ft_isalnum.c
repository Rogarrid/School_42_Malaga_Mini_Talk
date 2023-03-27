/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:35:42 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/11 12:06:20 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether a character is a alphanumeric character or not.
#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character >= 'A' && character <= 'Z')
		|| (character >= 'a' && character <= 'z')
		|| (character >= '0' && character <= '9'))
		return (1);
	else
		return (0);
}

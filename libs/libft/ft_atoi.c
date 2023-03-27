/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 08:27:45 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 16:25:52 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convert an string in an integer.
#include "libft.h"

int	ft_atoi(const char *string)
{
	int	convert_int;
	int	is_negative;

	convert_int = 0;
	is_negative = 1;
	while ((*string >= 9 && *string <= 13) || *string == 32)
		string++;
	if (*string == 45 || *string == 43)
	{
		if (*string == 45)
			is_negative *= -1;
		string++;
	}
	while (*string >= 48 && *string <= 57)
	{
		convert_int = convert_int * 10 + (*string - '0');
		string++;
	}
	return (convert_int * is_negative);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:18:31 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/05 09:11:18 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//To each character of the "string", the "function" is applied giving as
//parameter the index of each character inside the "string" and the direction
//of own character, that can be modified if was necesary.
#include "libft.h"

void	ft_striteri(char *string, void (*function)(unsigned int, char*))
{
	unsigned int	counter;

	counter = 0;
	if (!string || !function)
		return ;
	while (string[counter] != '\0')
	{
		(*function)(counter, &string[counter]);
		counter++;
	}
}

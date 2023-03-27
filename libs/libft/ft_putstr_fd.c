/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:30:57 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/05 10:49:13 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Send the "string" the file descriptor given.
#include "unistd.h"
#include "libft.h"

void	ft_putstr_fd(char *string, int file_descriptor)
{
	int	counter;

	if (!string)
		return ;
	counter = 0;
	while (string[counter] != '\0')
	{
		ft_putchar_fd(string[counter], file_descriptor);
		counter++;
	}
}

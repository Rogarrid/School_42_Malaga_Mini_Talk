/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:24:02 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/11 12:54:56 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Send the "number" the file descriptor given.
#include "unistd.h"
#include "libft.h"

void	ft_putnbr_fd(int number, int file_descriptor)
{
	if (number == -2147483648)
	{
		ft_putchar_fd('-', file_descriptor);
		ft_putstr_fd("2147483648", file_descriptor);
	}
	else if (number < 0)
	{
		ft_putchar_fd('-', file_descriptor);
		ft_putnbr_fd(-number, file_descriptor);
	}
	else
	{
		if (number > 9)
			ft_putnbr_fd(number / 10, file_descriptor);
		ft_putchar_fd('0' + number % 10, file_descriptor);
	}
}

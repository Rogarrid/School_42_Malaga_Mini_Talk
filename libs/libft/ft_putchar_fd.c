/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:42:54 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/05 10:19:51 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Send the "character" the file descriptor given.
#include "unistd.h"
#include "libft.h"

void	ft_putchar_fd(char character, int file_descriptor)
{
	write (file_descriptor, &character, 1);
}

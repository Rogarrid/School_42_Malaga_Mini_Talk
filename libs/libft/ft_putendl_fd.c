/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:48:37 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/11 10:20:40 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Send the "string" the file descriptor given, followed by a salt line.
#include "unistd.h"
#include "libft.h"

void	ft_putendl_fd(char *string, int file_descriptor)
{
	if (!string)
		return ;
	ft_putstr_fd(string, file_descriptor);
	ft_putchar_fd('\n', file_descriptor);
}

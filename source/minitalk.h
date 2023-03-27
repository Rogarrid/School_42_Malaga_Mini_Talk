/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:23:32 by rocio             #+#    #+#             */
/*   Updated: 2023/03/27 18:26:15 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <sys/types.h>
# include "../libs/libft/libft.h"
# include "../libs/printf/ft_printf.h"

void	send_bit_to_server(char *string, int number_pid, size_t length);
void	controller_sigint(int sig);
void	character_creator_by_bits(int bit);

#endif

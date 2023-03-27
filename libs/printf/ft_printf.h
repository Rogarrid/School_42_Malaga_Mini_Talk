/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:06:43 by rogarrid          #+#    #+#             */
/*   Updated: 2022/11/02 11:44:44 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(char const *string, ...);
void	ft_filter_conver(char *string, va_list arguments, size_t *length);
void	ft_putchar_length(int character, size_t *length);
void	ft_strchr_length(char *string, size_t *length);
void	ft_putnbr_length(int number, size_t *length);
void	ft_putcharporcent_length(size_t *length);
void	ft_puthex_length(unsigned long long direction, size_t *length);
void	ft_conver_base_hexa(unsigned long int direction, size_t *length);
void	ft_lowercase_hex(unsigned int direction, size_t *length);
void	ft_uppercase_hex(unsigned int direction, size_t *length);
void	ft_putnbr_unsig_length(unsigned int number, size_t *length);

#endif

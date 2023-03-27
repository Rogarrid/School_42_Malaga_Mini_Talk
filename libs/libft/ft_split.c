/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:23:35 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/05 17:22:00 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Reserves an array of the final str that results from separating
//"str" into a substr using the given "cha" as the delimiter.
//The array ends with a null pointer.

#include "libft.h"

static int	ft_count_word(const char *str, char cha)
{
	int	length_sub_str;
	int	flag;

	length_sub_str = 0;
	flag = 0;
	while (*str)
	{
		if (*str != cha && flag == 0)
		{
			flag = 1;
			length_sub_str++;
		}
		else if (*str == cha)
			flag = 0;
		str++;
	}
	return (length_sub_str);
}

static char	*ft_word_dup(const char *str, int start, int finish)
{
	char	*sub_string;
	int		counter_sub_str;

	sub_string = malloc((finish - start + 1) * sizeof(char));
	counter_sub_str = 0;
	while (start < finish)
		sub_string[counter_sub_str++] = str[start++];
	sub_string[counter_sub_str] = '\0';
	return (sub_string);
}

char	**ft_split(char const *str, char cha)
{
	size_t	counter_str;
	size_t	counter_sub_str;
	int		flag;
	char	**split;

	split = malloc((ft_count_word(str, cha) + 1) * sizeof(char *));
	if (!str || !split)
		return (NULL);
	counter_str = 0;
	counter_sub_str = 0;
	flag = -1;
	while (counter_str <= ft_strlen(str))
	{
		if (str[counter_str] != cha && flag < 0)
			flag = counter_str;
		else if ((str[counter_str] == cha || counter_str == ft_strlen(str))
			&& flag >= 0)
		{
			split[counter_sub_str++] = ft_word_dup(str, flag, counter_str);
			flag = -1;
		}
		counter_str++;
	}
	split[counter_sub_str] = 0;
	return (split);
}

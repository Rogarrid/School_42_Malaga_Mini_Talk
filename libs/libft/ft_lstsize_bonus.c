/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:17:03 by rocio             #+#    #+#             */
/*   Updated: 2022/10/13 12:26:57 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Account all the nodos of an list.
#include "libft.h"

int	ft_lstsize(t_list *list)
{
	int		counter;

	counter = 0;
	if (!list)
		return (0);
	while (list)
	{
		list = list->next;
		counter++;
	}
	return (counter);
}

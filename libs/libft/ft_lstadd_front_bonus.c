/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:51:25 by rocio             #+#    #+#             */
/*   Updated: 2022/10/13 12:13:15 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Add the nodo "new" the beginning the "list".
#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (!new)
		return ;
	if (!list)
	{
		*list = new;
		return ;
	}
	new -> next = *list;
	*list = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:30:35 by rocio             #+#    #+#             */
/*   Updated: 2022/10/13 12:13:23 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Return last nodo the list.
#include "libft.h"

t_list	*ft_lstlast(t_list *list)
{
	if (!list)
		return (0);
	while (list -> next)
		list = list -> next;
	return (list);
}

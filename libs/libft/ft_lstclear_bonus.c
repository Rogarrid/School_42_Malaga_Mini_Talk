/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:20:15 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 15:35:04 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Remove and free the given 'lst' node and all consecutive from that node,
//using the function 'del' and free(3). At the end, the pointer to the list
//must be NULL
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}

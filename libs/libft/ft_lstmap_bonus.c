/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:47:35 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 16:09:01 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Iterates the 'lst' list and applies the 'f' function to the content of each
//node. Create a resulting list of the correct and successive application of
//the function 'f' over each node. The 'del' function is used to remove the
//contents of a node, if you do lack.
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*element;

	if (!lst || !f)
		return (NULL);
	new = 0;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, element);
		lst = lst->next;
	}
	return (new);
}

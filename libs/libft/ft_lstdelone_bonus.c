/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:38:05 by rogarrid          #+#    #+#             */
/*   Updated: 2022/10/13 13:28:09 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Takes an 'lst' node as a parameter and releases the memory of the content
//using the ’del’ function given as a parameter, in addition to freeing the
//node. The memory of 'next' should not be freed.
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free (lst);
}

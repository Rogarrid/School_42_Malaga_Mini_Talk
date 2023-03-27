/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:54:20 by rocio             #+#    #+#             */
/*   Updated: 2022/10/13 12:11:26 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create an new nodo using "malloc". The variable "content" is initialized
//with the content for parametre "content". The variable "next", whith Null.
#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new_nodo;

	new_nodo = (t_list *)malloc(sizeof(t_list));
	if (!new_nodo)
		return (NULL);
	new_nodo -> content = content;
	new_nodo -> next = NULL;
	return (new_nodo);
}

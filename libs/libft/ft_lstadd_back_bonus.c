/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarrid <rogarrid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:08 by rocio             #+#    #+#             */
/*   Updated: 2022/10/13 12:14:02 by rogarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Add the nodo "new" the beginning the "list".
#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	aux = ft_lstlast(*list);
	if (!aux)
		*list = new;
	else
		aux -> next = new;
}

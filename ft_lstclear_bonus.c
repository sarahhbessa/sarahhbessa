/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:47:28 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/11 15:47:34 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	current_node = *lst;
	while (current_node)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	*lst = NULL;
}

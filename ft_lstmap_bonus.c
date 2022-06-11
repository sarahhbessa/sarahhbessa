/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:45:43 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/11 15:45:55 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;

	if (!lst || !f)
		return (0);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	tail = head;
	lst = lst->next;
	while (lst)
	{
		tail->next = ft_lstnew(f(lst->content));
		if (!tail->next)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		tail = tail->next;
		lst = lst->next;
	}
	tail->next = NULL;
	return (head);
}

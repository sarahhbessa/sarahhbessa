/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 15:48:39 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/11 15:48:44 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tail;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	tail = ft_lstlast(*alst);
	tail->next = new;
}

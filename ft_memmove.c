/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:43:30 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/06 13:35:18 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_dest;
	const char	*p_src;
	size_t		i;

	p_dest = (char *)dst;
	p_src = (char *)src;
	i = 0;
	if (p_dest > p_src)
	{
		while (len > 0)
		{
			len--;
			p_dest[len] = p_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			p_dest[i] = p_src[i];
				i++;
		}
	}
	return (p_dest);
}

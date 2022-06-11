/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:43:30 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/11 15:57:01 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest_tmp;
	char	*src_tmp;

	dest_tmp = (char *)dst;
	src_tmp = (char *)src;
	if (dst == src)
		return (dst);
	if (src_tmp < dest_tmp)
	{
		while (len--)
			*(dest_tmp + len) = *(src_tmp + len);
		return (dst);
	}
	while (len--)
		*dest_tmp++ = *src_tmp++;
	return (dst);
}

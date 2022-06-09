/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:46:13 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/06 13:54:00 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr_s;

	ptr_s = (unsigned char *) s;
	i = 0;
	while (n > i)
	{
		if (ptr_s[i] == c)
			return (&ptr_s[i]);
		i++;
		n--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:25:37 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/06 20:45:26 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if ((i <= 0) || (i >= dstsize) && dst[j])
		return (1 + dstsize);
	while ((j < (dstsize - i - 1)) && (src[j]))
	{
		printf("%c\n", dst[i + j]);
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (i + k);
}

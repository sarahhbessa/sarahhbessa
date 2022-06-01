/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:25:37 by sarferre          #+#    #+#             */
/*   Updated: 2022/05/30 20:05:13 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;

	i = ft_strlen(dst);
	j = 0;
	while (j < (dstsize -1))
	{
		dst[i] = src[j];
			i++;
			j++;
	}
	return (i + j);
}

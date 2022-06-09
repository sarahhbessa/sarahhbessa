/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:52:35 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/06 13:41:16 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && (dstsize -1) != 0)
		{
			dst[i] = src[i];
			i++;
			dstsize--;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char dst1[] = "sarah";
	char src1[] = "bessa";
	char dst2[] = "sarahh";
	char src2[] = "bessa";
	size_t dstsize = 5;

	printf("%s\n",dst1);
	printf("%s\n",dst2);
	printf("%lu\n",ft_strlcpy(dst1, src1, dstsize));
	printf("%lu\n", strlcpy(dst2, src2, dstsize));
	printf("%s\n",dst1);
	printf("%s\n",dst2);
	return (0);
}*/

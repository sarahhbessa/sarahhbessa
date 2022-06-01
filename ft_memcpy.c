/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:42:42 by sarferre          #+#    #+#             */
/*   Updated: 2022/05/16 12:26:09 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;

	p_dest = dest;
	p_src = src;
	while (n > 0)
	{
		p_dest[n] = p_src[n];
		n--;
	}
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char sh[] = "sarah";
	char dest2[2];
	char dest[2];

printf("%s\n",((char *) ft_memcpy(((void *)dest),((void *) sh), 2)));
printf("%s\n",((char *) memcpy(((void *) dest2), ((void *) sh), 2)));

		return (0);
}

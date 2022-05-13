/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:42:42 by sarferre          #+#    #+#             */
/*   Updated: 2022/05/13 19:27:28 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	char	*p_dest;
	const char	*p_src;

	p_dest = (char *) dest;
	p_src = (const char *) src;
	i = 0;
	while (n != 0)
	{
		p_dest[i] = p_src[i];
		i++;
		n--;
	}
	return (p_dest);
}
#include <stdio.h>
int main(void)
{
	char sh[] = "saraaah";
	char dest[8];

ft_memcpy(dest, sh, 4);
printf("%s\n", dest);
		return (0);
}

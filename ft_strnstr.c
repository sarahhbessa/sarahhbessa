/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:18:47 by sarferre          #+#    #+#             */
/*   Updated: 2022/05/31 21:31:13 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int sizelen;
	char *hay;
	
	haystack = (char *)hay;
    sizelen = ft_strlen(needle);
	i = 0;
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while 
		if (j == sizelen)
			return(hay + i);
		i++;
	}
	return (0);
}

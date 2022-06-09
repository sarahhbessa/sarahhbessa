/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:18:47 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/06 21:21:44 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	sizelen;

    sizelen = ft_strlen(needle);
	if (len == 0)
		return (0);
	i = 0;
	while (haystack[i] != '\0' && (size_t)i < len)
	{
		j = 0;
		while(haystack[i] == needle[j]) 
		{   i++;
			j++;
			if (j == sizelen)
				return((char *)haystack + i - j);
		}
		i++;
	}
	return (0);
}

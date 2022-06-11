/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:48:51 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/11 19:10:55 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	occ;

	str = ((char *) s);
	occ = ((char) c);
	while (*str)
	{
		if (*str == occ)
			return (str);
		str++;
	}
	if (*str == occ)
		return (str);
	return (0);
}

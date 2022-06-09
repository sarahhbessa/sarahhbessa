/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:34:25 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/06 21:15:35 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	size_t	j;
	char	*cpy;

	j = ft_strlen(s1);
	cpy = (char *)malloc(sizeof(*cpy )*(j + 1));
	if (!cpy)
		return (NULL);
	ft_memcpy (cpy, s1, j + 1);
	return (cpy);
}

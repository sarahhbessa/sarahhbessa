/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:07:05 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/11 15:34:54 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			result = (char *)(s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		result = (char *)(s + i);
	return (result);
}

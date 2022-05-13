/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:26:36 by sarferre          #+#    #+#             */
/*   Updated: 2022/05/12 15:23:13 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*p_str;

	p_str = (unsigned char *) s;
	i = 0;
	while (n > i)
	{
		p_str[i] = c;
		i++;
	}
	return (p_str);
}

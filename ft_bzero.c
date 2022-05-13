/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:26:50 by sarferre          #+#    #+#             */
/*   Updated: 2022/05/12 16:26:16 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*p_str;

	p_str = (unsigned char *) s;
	i = 0;
	while (n != 0)
	{
		p_str[i] = '\0';
		i++;
		n--;
	}		
}

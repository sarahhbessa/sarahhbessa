/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:48:51 by sarferre          #+#    #+#             */
/*   Updated: 2022/05/17 17:00:54 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp_s;

	tmp_s = (char *) s;
	i = 0;
	while (tmp_s[i] != c && tmp_s[i] != '\0')
		i++;
	if (tmp_s[i] == c)
		return (&tmp_s[i]);
	return (0);
}

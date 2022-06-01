/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:07:05 by sarferre          #+#    #+#             */
/*   Updated: 2022/05/20 12:27:52 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char	*tmp_s;

	tmp_s = (char *) s;
	i = ft_strlen(tmp_s);
	while (tmp_s[i] != (char)c && i != 0)
		i--;
		return (&tmp_s[i]);
	return (0);
}

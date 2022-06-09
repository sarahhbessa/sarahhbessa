/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferre <sarferre@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:35:16 by sarferre          #+#    #+#             */
/*   Updated: 2022/06/07 19:02:05 by sarferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*ret;
	
	ret = (char *)malloc(sizeof(char ) * (len + 1));
	if(!ret)
		return(NULL);
	i = 0;
	while (s[i] != '\0' && i < start)
		i++;


	printf("%c\n", s[i]);
		return(ret);
}

int main(void)
{
	char const s[] = "bom dia caralho";
	size_t len = 3;
	unsigned int start = 4;

	printf("%s\n", ft_substr(s, start, len));
	return (0);
}

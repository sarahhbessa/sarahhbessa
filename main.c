#include "libft.h"
#include <stdio.h>

int main(void)
{
	//printf("%i\n", ft_isalpha(2));
	//printf("%i\n", ft_isdigit(2));
	//printf("%i\n", ft_isalnum(201));
	//printf("%i\n", ft_isascii(100));
	//printf("%i\n", ft_isprint(88));
	//char sh[] = "sarahhhhh";
	//printf("%zu\n", ft_strlen(sh));
	//char sh[] = "sarah";	
	//printf("%s\n", ft_memset(sh, '.', 3));
	//char sh[] = "sarah";
	//ft_bzero(sh, 3);
    //printf("%s\n", sh);
		char sh[] = "saaah";
		char dest[6];
		ft_memcpy(dest, sh, 2);
		printf("%s\n", dest);

	return (0);

}

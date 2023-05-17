#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	const unsigned char	*psrc;
	size_t	i;

	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i]; /*comparer à la syntaxe dans memset*/
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char dest[25] = "";
	char *src = "t'es un gros pd";
	ft_memcpy(dest, src, 25);
	printf("%s\n", dest);
	memcpy(dest, src, 25);
	printf("dest est maintenant : %s\n", dest);
 		
}*/

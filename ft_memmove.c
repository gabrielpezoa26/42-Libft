#include <string.h>
#include <stdio.h>


int	ft_strlen(char *s1)
{
	int count;

	count = 0;
	while (count != '\0')
	{
		count++;
	}
	return (count);
}
void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned int i;
	unsigned int size_dest;
	unsigned int size_src;
	unsigned char *d;
	unsigned char *k;

	d = (unsigned char *)dest;
	k = (unsigned char *)src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	while (i < num)
	{
		d[i] = k[i];
		i++;
	}
	return (dest);
}

int	main()
{
	char	potato[4] = "aaaa";
	char	caneta[3] = "kk";

	//ft_memmove(caneta, potato, 4);
	//printf("func 42: %s   \n", caneta);

	memmove(caneta, potato, 4);
	printf("func. original %s\n", caneta);
}
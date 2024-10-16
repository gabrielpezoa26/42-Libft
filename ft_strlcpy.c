#include <stdio.h>
#include <string.h>

char	*ft_strlcpy(char *dest, char *src, int	n)
{
	int i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return (dest);
}

int	main()
{
	char	potato[] = "batata";
	char 	caneta[50] = "";


	ft_strlcpy(caneta, potato, 3);
	printf("%s  \n", caneta);
	printf("Length of caneta: %zu\n", strlen(caneta));

	return (0);
}
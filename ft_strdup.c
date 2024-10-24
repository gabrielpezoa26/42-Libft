#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = (char *)calloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

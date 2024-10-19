#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *string)
{
	int	size;

	size = 0;
	while (string[size] != '\0')
	{
		size++;
	}
	return (size);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	potato;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > '0' && str[i] < '9')
		{
			while(str[i] < ft_strlen(str))
			{
				potato = str[i] - 48;
				j++;
			}
		}
		i++;
	}
	return (potato);
}

int	main()
{
	char	potato[] = "72";

	printf("%d", ft_atoi(potato));
}
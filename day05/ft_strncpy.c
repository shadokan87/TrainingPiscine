#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	i++;
	return i;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	if (n > ft_strlen(dest) || n > ft_strlen(src))
	return 0;
	i = 0;
	while (src[i] && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return dest;
}

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char swap;
	int start;
	int end;
	char *res;
	
	swap = '0';
	start = 0;
	end = (ft_strlen(str) - 1);
	res = str;
	while (end >= start)
	{
	swap = str[start];
	str[start] = str[end];
	str[end] = swap;
	start++;
	end--;
	}
	return (res);
}

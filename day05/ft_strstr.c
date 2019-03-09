#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	i++;
	return i;
}

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int y;
	int o;
	int c;
	
	o = 0;
	y = 0;
	i = 0;
	c = 0;
	while (str[i])
	{
	if (to_find[y] == str[i])
	{
	c = i;
	i++;
	y++;
	o++;
	while (to_find[y])
	{
	if (to_find[y] != str[i])
	return ft_strstr(&str[i + 1], to_find);
	i++;
	y++;
	o++;
	}
	}
	i++;
	}
	if (o != ft_strlen(to_find))
	return NULL;
	return &str[c];

}

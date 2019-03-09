#include <unistd.h>

int	ft_sqrt(int nb)
{

	int i;
	int y;

	i = 1;
	y = 1;
	while (i != 2147483647)
	{
	if (y == 2147483646)
	return 0;
	i *= i;
	if (i == nb)
	break;
	else
	{
	y++;
	i = y;
	}	
	}
	return y;
}

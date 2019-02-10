#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int y;
	
	i = 0;
	if (power == 0)
	return 1;
	else if (power < 0)
	return 0;
	else
	while ((i) != (power - 1))
	{
	nb *= power;
	i++;
	}
	return nb;
}

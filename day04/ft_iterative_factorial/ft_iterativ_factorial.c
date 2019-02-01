#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 2;
	res = 1;
	if (nb <= 0 || nb > 12)
	return 0;
	while (i <= nb)
	{
	res *= i;
	i++;
	}
	return res;
}

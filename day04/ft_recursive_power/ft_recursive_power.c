#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	return 1;
	if (power < 0)
	return 0;
	if (power == 1)
	return nb;
	return (nb * ft_recursive_power(nb, power - 1));
}

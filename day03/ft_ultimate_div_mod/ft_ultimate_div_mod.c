#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int swap1;
	int swap2;

	swap1 = a;
	swap2 = b;
	a = swap1 / swap2;
	b = swap1 % swap2;
}


#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}


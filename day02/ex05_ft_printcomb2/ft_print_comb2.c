#include <unistd.h>


// a | b | c | d
// 0 | 1 | 0 | 2
void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}


void	ft_print_all(int a, int b)
{
	if (a <= 9)
		ft_putchar('0');
	ft_putnbr(a);
	ft_putchar(' ');
	if (b <= 9)
		ft_putchar ('0');
	ft_putnbr(b);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = 0;
	b = 1;
	while (!(b == 99 + 1))
	{
	if (b <= 99)
	{
	ft_print_all(a, b);
	b++;
	}
	}
	a = 1;
	b = 2;
	while (!(a == 98 && b == 99 ))
	{
	ft_print_all(a, b);
	if (b == 99)
	{
	a++;
	b = 1;
	}
	if (b <= 99)
	b++;
	}
	ft_print_all(a, b);
	
}

int	main(void)
{
	ft_print_comb2();
}

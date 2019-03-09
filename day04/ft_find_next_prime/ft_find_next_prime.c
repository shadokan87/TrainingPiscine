#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
int i;
int y;
int max;

max = 2147483647;
y = 0;
i = 1;
while (i < i*1000)
{
if (nb < 0 || nb == 0 || nb == 1)
{
i = 1;
y = 0;
nb++;
}
if (nb % i == 0)
y++;
if (y > 2)
{
i = 0;
y = 0;
nb++;
}
i++;
}
return (nb);
}

int	main(void)
{
printf("%d", ft_is_prime(0));
}

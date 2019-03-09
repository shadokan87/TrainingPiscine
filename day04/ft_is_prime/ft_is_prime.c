#include <unistd.h>

int ft_is_prime(int nb)
{
int i;
int y;
int max;

max = 2147483647;
y = 0;
i = 1;
while (i < max)
{
if (nb % i == 0)
y++;
if (y > 2)
return 0;
i++;
}
return (y -1);
}

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int nb;
	int i;
	int k;
	int p;
	int m;
	
	k = 1;
	m = 0;
	p = 0;
	nb = 0;
	i = 0;
	while (str[i])
	{
	while (str[i] >= 9 && str[i] <= 13)
	{
	if (!(str[i + 1] >= '0' && str[i + 1] <= '9') || (str[i - 1] >= '0' && str[i - 1] <= '9'))
	break;
	i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
	nb = nb * 10;
	nb = nb + str[i] - '0';
	i++;
	}
	else if (str[i] == '+')
	{
	if (!(str[i + 1] >= '0' && str[i + 1] <= '9') || (str[i - 1] >= '0' && str[i - 1] <= '9'))
	break;
	k = 1;
	i++;
	m++;
	if (m > 1)
	break;
	}
	else if (str[i] == '-')
	{
	if (!(str[i + 1] >= '0' && str[i + 1] <= '9') || (str[i - 1] >= '0' && str[i - 1] <= '9'))
	break;
	k = -1;
	i++;
	m++;
	if (m > 1)
	break;
	}
	else break;
	}

	return (nb * k);
}

int main(int argc, char **argv)
{
printf("%d", ft_atoi("12\n3+456"));
//printf("%d", ft_atoi(argv[1]));
}

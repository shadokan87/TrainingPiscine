#include <unistd.h>
#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int right;
	int left;
	int swap;
	int c;
	
	swap = 0;
	right = size - 1;
	left = right - 1;
	c = 0;
	while (c != size * size)
	{
	if (tab[left] > tab[right])
	{
	swap = tab[left];
	tab[left] = tab[right];
	tab[right] = swap;
	}
	left--;
	right--;
	c++;
	if ( left == - 1)
	{
	right = size - 1;
	left = right - 1;
	}
	}
}
int main(void)
{
	int test[18] = {2,1948,-459,849238726,735,2,3,9,0,4,1,8,2,9,7,3,4,10};
	
	ft_sort_integer_table(test, 18);
	int i = 0;
	while (i <= 17)
	{
	printf(" %d , ", test[i]);
	i++;
	}
}

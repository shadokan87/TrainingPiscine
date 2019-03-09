#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
char src[] = "Hello les gens";
char dest[] = "c";
printf("%s", strncpy (dest, src, 6));
}

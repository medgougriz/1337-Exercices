#include <unistd.h>

int	main(void)
{
	char	c;

	c = 'A';
	while (c <= 'Z')
	{
		write(1, &c, 1);
		write(1, &c + 1, 1);
		c++;
	}
	return (0);
}


#include <unistd.h>

int	main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'B';
	while (b <= 'Z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a = a + 2;
		b = b + 2;
	}
	return (0);
}


#include <unistd.h>

void	print_number(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	print_number();
	return (0);
}

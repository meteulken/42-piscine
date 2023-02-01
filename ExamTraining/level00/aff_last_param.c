
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = argc - 1;
	i = 0;
	if (argc >= 2)
	{
		while (argv[x][i] != '\0')
		{
			write(1, &argv[x][i], 1);
			i++;
		}		
	}
	return (0);
}

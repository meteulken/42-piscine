
#include <unistd.h>

int	putz(void)
{
	write(1, "z", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = -1;
	x = 0;
	if (argc >= 2)
	{
		while (argv[++x])
		{
			if (putz() == 0)
				break ;
			while (argv[x][++i])
			{
				if (argv[x][i] == 'z')
					putz();
				else if (argv[x][i] != 'z')
					putz();
			}
		}
	}
	else
		putz();
	return (0);
}

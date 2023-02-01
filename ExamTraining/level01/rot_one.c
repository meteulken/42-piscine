
#include <unistd.h>

void	rot_one(char *str)
{
	int	i;

	i = -1;
	if (str[i + 1] >= 32 && str[i + 1] <= 127)
	{
		while (str[++i])
		{
			if (str[i] >= 'A' && str[i] <= 'Y')
				str[i] += 1;
			else if (str[i] >= 'a' && str[i] <= 'y')
				str[i] += 1;
			else if (str[i] == 'Z' || str[i] == 'z')
				str[i] -= 25;
			write(1, &str[i], 1);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rot_one(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}


#include <unistd.h>

void	ft_repeat_alpha(char *str)
{
	int	i;
	int	letter;

	i = 0;
	while (str[i])
	{
		letter = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
			letter = str[i] - 64;
		else if (str[i] >= 'a' && str[i] <= 'z')
			letter = str[i] - 96;
		else
			letter = 1;
		while (letter--)
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

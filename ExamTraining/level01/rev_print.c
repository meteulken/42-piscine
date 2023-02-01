
#include <unistd.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	rev_print(char *str)
{
	int	x;

	x = ft_str_len(str);
	while (str[x - 1])
	{
		write(1, &str[x - 1], 1);
		x--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}

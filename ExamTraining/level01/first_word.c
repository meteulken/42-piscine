
#include <unistd.h>

int	ft_isspace(char i)
{
	if (i == '\t' || i == '\n' || i == '\v' || i == '\f' || i == ' ')
		return (1);
	return (0);
}

void	first_word(char *str)
{
	while (ft_isspace(*str))
		str++;
	while (*str && !(ft_isspace(*str)))
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

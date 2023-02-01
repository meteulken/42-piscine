
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			ft_putchar(str[i] += 13);
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar(str[i] -= 13);
		else if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar(str[i] += 13);
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar(str[i] -= 13);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}

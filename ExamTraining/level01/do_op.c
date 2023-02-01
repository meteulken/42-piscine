
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	op;
	int		a;
	int		b;
	int		res;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2][0];
	if (argc == 4)
	{
		if (op == '+')
			res = a + b;
		else if (op == '-')
			res = a - b;
		else if (op == '/')
			res = a / b;
		else if (op == '*')
			res = a * b;
		else if (op == '%')
			res = a % b;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
}

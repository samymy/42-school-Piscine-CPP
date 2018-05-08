#include <iostream>

void	print_in_uppercase(char *str)
{
	while (*str)
		std::cout << (char) std::toupper(*str++);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (*++argv)
		print_in_uppercase(*argv);
	std::cout << std::endl;
	return (0);
}

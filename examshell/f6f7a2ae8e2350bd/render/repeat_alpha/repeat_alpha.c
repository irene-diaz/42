#include <unistd.h>

int	get_index(char c)
{
	int		i;
	char	*alphabet;
	char	*alphabet2;

	i = 0;
	alphabet = "abcdefghijklmnopqrstuvwxyz";
	alphabet2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (c >= 'A' && c <= 'Z')
	{
		while (alphabet2[i] != '\0')
		{
			if (c == alphabet2[i])
				return (i + 1);
			i++;
		}
	}
	else if (c >= 'a' && c <= 'z')
	{
		while (alphabet[i] != '\0')
		{
			if (c == alphabet[i])
				return (i + 1);
			i++;
		}
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		j = 0;
		while (j < get_index(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

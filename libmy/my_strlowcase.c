/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** libmy
*/

char *my_strlowcase(char *av)
{
	int i;

	i = 0;
	while (av[i] != '\0') {
		if (av[i] > 64 && av[i] < 91) {
			av[i] = av[i] + 32;
		} else {
			av[i];
		}
		i++;
	}
	av[i] = '\0';
	return (av);
}

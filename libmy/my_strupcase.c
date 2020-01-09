/*
** EPITECH PROJECT, 2018
** strupcase
** File description:
** strupcase
*/

char *my_strupcase(char *av)
{
	int i;

	i = 0;
	while (av[i] != '\0') {
		if (av[i] > 96 && av[i] < 123) {
			av[i] = av[i] - 32;
		} else {
			av[i];
		}
		i++;
	}
	av[i] = '\0';
	return (av);
}

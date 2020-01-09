/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** return number of character
*/

int my_strlen(char const *str)
{
	int a = 0;

	for (int i = 0;str[i] != '\0';i++) {
		a++;
	}
	return (a);
}

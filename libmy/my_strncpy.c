/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** function that copies n characters from a string into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	while (src[0] != '\0' && i < n) {
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

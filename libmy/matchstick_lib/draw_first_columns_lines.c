/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** matchstick lib
*/

void to_draw_first_columns_lines(short x, short y, char array[y][x])
{
	for (long i = 0;i < x;i++) {
		array[0][i] = '*';
	}
	for (long j = 0;j < y;j++) {
		array[j][0] = '*';
	}
}

void to_draw_last_columns(short x, short last_line, char array[0][x])
{
	for (long i = 0;i < x;i++) {
		array[last_line][i] = '*';
	}
}

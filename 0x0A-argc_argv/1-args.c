#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguements pased into it
 * @argc: number of urguements passed
 * @argv: array of urguements to be passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

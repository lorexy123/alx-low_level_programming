#include "main.h"
#include <stdio.h>
/**
  * _strcat - concatenates two strings
  * @dest: Second string to be concatenated to src
  * @src: First string to be concatenated to dest
  * Return: Pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++);
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

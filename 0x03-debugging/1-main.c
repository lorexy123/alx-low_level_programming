#include <stdio.h>
/**
  * main - causes an infinite loop
  * Return: 0
  */
int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;


	/*
	   *while (i < 10)
	   *{
	   *Infinite loop - No increase of variable
	   *putchar(i);
	   *}
	   */
	printf("Infinite loop avoided! \\0/\n");

	return (0);
}
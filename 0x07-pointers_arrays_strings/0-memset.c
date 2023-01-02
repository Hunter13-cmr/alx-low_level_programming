#include "main.h"

/**
* _Ãmemset - flls a memory block with a constant byte
* @s: address to memory block
* @b: char to be used
*@n: number of bytes to be used
*
* Return: pointer to the memory block
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", b[a];
		a++;
	}
	printf("\n");

	return (s);
}

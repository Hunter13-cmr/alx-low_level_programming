#include <stdio.h>
/**
* main - program that prints all possible different combinaitions of 2 digits
*
* Description: using the main function
* this program prints "Programming is Positive, zero, or negative
* Return: 0
*/
int main(void)
{int c = 0;
int f_d;
int l_d;
while (c <= 99)
{f_d = (c / 10 + '0');
l_d = (c % 10 + '0');
if (f_d < l_d)
{putchar(f_d);
putchar (l_d);
if (c != 89)
{putchar(',');
putchar(' ');
}
}
c++;
}
putchar('\n');
return (0);
}

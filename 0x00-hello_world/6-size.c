#include<stdio.h>
/**
* main - program that prints the size of various types
* Return: Always 0 (Success)
*/
int main(void)
{
char a;
int x;
long int y;
long long int z;
float ft;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(ft));
return (0);
}

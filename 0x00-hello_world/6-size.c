#include<stdio.h>
/**
 * main - program that prints the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main() 
{	
	char c; 
	int n;
	long int x;
	long long int y; 
	float f;
    printf("Size of char: %zu byte\n", sizeof(c));
    printf("Size of an int: %zu byte(s)\n", sizeof(n));
    printf("Size of a long int: %zu byte(s)\n", sizeof(x));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(y));
    printf("Size of a float: %zu byte(s)\n", sizeof(f));
return 0;
}

#include <stdio.h>
#include <stddef.h>
/**
 * print_size_of_type -Prints the size
 * @type: The type of the print size
 */
void print_size_of_type(const char *type)
{
printf("Size of %s: %zu bytes\n", type, sizeof(type));
}

/**
 * main - program that prints size
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

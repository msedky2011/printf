#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	int len1, len2;


    len1 = _printf("Let's try to printf a simple sentence.\n");
    len2 =  printf("Let's try to printf a simple sentence.\n");

	printf("%d == %d", len1, len2);

   len1 =  _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');

            printf("%d == %d", len1, len2);

    len1 = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");

            printf("%d == %d", len1, len2);

    len1 = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

            printf("%d == %d", len1, len2);

    return (0);
}

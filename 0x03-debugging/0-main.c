#include "main.h"
#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int a, b, c;
        int largest;

        a = 89;
        b = 89;
        c = 90;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}

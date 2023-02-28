#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = atoi("98");
    printf("%d\n", nb);
    nb = atoi("-402");
    printf("%d\n", nb);
    nb = atoi("-98");
    printf("%d\n", nb);
    nb = atoi("214748364");
    printf("%d\n", nb);
    nb = atoi("0");
    printf("%d\n", nb);
    nb = atoi("402");
    printf("%d\n", nb);
    nb = atoi("98");
    printf("%d\n", nb);
    nb = atoi("402");
    printf("%d\n", nb);
    return (0);
}

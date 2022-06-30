#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // La boucle la mieux adaptée est do while
    int number = 0;

    do
    {
        printf("Give me positive number please : ");
        scanf("%d", &number);

    } while (number < 0);

    return 0;
}

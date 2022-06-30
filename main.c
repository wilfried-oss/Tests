#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number = 0;
    // La boucle la mieux adaptée est do while 
    printf("Give me positive number please : ");
    scanf("%d", &number);

    while (number < 0)
    {
        printf("Give me positive number please : ");
        scanf("%d", &number);
    }

    // do
    // {
    //     printf("Give me positive number please : ");
    //     scanf("%d", &number);

    // } while (number < 0);

    return 0;
}

#include <stdio.h>
int main()
{
    int x = 1;
    for (x = 1; x < 5; x++)
    {
        if (x == 3)
        {
            printf("using break statement\n");
            break;
        }
        printf("%d\n", x);
    }
    printf("out of the  for loop\n");
    return 0;
}
#include <stdio.h>
int main()
{
    int marks;
    printf("enter percentage");
    scanf("%d", &marks);
    if (marks >= 80)
        ;
    printf("grade A");
    if (marks >= 70)
        printf("grade B");
    else if (marks >= 60)
        printf("grade C");
    else
        printf("Fail");
    return 0;
}
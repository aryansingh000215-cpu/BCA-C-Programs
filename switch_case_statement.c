#include <stdio.h>
int main()
{
    int day;
    printf("enter any b/w 1to7");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuseday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    defalut:
        printf("wrong choice");
    }
    return 0;
}
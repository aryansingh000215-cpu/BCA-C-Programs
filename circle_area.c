#include <stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float area;
    printf("enter the radius of circle\n");
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("area of circle =%f", area);
    return 0;
}
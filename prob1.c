
#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1;
    float x2, y2;

    printf("Enter the P(x1,y1): \n");
    scanf("%f", &x1);
    scanf("%f", &y1);

    printf("Enter the Q(x2,y2): \n");
    scanf("%f", &x2);
    scanf("%f", &y2);

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("The distance is %lf", d);

    return 0;
}

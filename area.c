#include <stdio.h>
int main()
{

float x1,y1,x2,y2,x3,y3, area;

printf("enter X1 Y1: ");
scanf("%f %f", &x1, &y1);

printf("enter X2 Y2: ");
scanf("%f %f", &x2, &y2);

printf("enter X3 Y3: ");
scanf("%f %f", &x3, &y3);

area = (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2;

printf("Area of the triangle is = %f \n", area);
}

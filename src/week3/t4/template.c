#include <stdio.h>
#include <math.h>
void inputXY(double *x1, double *y1, double *x2, double *y2);
void outputResult(double dist);
double calDistance1(double x1, double y1, double x2, double
y2);
void calDistance2(double x1, double y1, double x2, double y2,
double *dist);
int main()
{
double x1, y1, x2, y2, distance=-1;
inputXY(&x1, &y1, &x2, &y2); // call by reference
distance = calDistance1(x1, y1, x2, y2); // call by value
printf("calDistance1(): ");
outputResult(distance);
calDistance2(x1, y1, x2, y2, &distance); // call by reference
printf("calDistance2(): ");
outputResult(distance);
// call by value
return 0;
}
void inputXY(double *x1, double *y1, double *x2, double *y2)
{
/* Write your code here */
}
void outputResult(double dist)
{
/* Write your code here */
}
double calDistance1(double x1, double y1, double x2, double y2)
{
/* Write your code here */
}
void calDistance2(double x1, double y1, double x2, double y2,
double *dist)
{
/* Write your code here */
}
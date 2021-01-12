#include<stdio.h>
#include <math.h>
int main(){
int x,y;
float r;
printf("Value of x :");
scanf("%d",&x);
printf("Value of y :");
scanf("%d",&y);
r=sqrt(x*x+y*y);
float angle=atan(y/x);
angle*=180/3.14;
printf("%f\n%f",r,angle);
return 0;
}

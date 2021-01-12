#include<stdio.h>
#include<math.h>
int main(){
 float angle;
printf("Enter the value of angle in degrees:");
scanf("%f", &angle);
angle*=3.14/180;
float sinofangle=sin(angle);
float cosofangle=cos(angle);
//float cosecofangle=cosec(angle);
//float secofangle=sec(angle);
float tanofangle=tan(angle);
//float cotofangle=cot(angle);
printf("sine of angle = %f",sinofangle);
printf("cos of angle= %f ",cosofangle);
printf("tan of angle =%f",tanofangle);
return 0;
}

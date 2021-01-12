#include<stdio.h>
#include<math.h>
int main(){
int v;
int t;
printf("Enter value of v:");
scanf("%d",&v);
printf("Enter value of t:");
scanf("%d",&t);
float power=pow(v,0.16f);
float wcf=35.74+0.6215*t+(0.4275*t-35.75)*power;
printf("Wind chill factor : %f",wcf);
return 0;
}

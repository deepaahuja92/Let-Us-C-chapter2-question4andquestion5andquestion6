#include<stdio.h>
#include<math.h>
int main(){
int L1,L2,G1,G2;
L1*=3.14/180;
L2*=3.14/180;
G1*=3.14/180;
G2*=3.14/180;
printf("Enter latitude and longitude of first place ");
scanf("%d%d",&L1,&L2);
printf("Enter latitude and longitude of second place ");
scanf("%d%d",&G1,&G2);
float D=3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
printf("Distance between the two places %f\n",D);
return 0;
}

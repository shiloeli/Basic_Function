#include<stdio.h>
#include "myMath.h"

int main(){
printf("Please enter numbers:\n");
double x; double f;
scanf("%lf",&x);
f=add(Exponent((int)x),Power(x,3));
f=sub(f,2);
printf("The value of f(x)=e^x+x^3-2 at the point %lf is %.4lf\n",x,f);

f=0;
double temp=mul(x,3);
double temp1=Power(x,2);
temp1=mul(temp1,2);
f=add(temp1,temp);
//f=add(mul(x,3),mul(Power(x,2),2));
printf("f(x)=3x+2x^2 at the point %lf is %.4lf\n",x,f);

f=0;
double temp2=Power(x,3);
double temp3=mul(4,temp2);
double temp4=div(temp3,5);
double temp5=mul(-2,x);
f=add(temp4,temp5);
printf("f(x)=(4x^3)/5-2x at the point %lf is %.4lf\n",x,f);
}


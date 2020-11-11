#include"myMath.h"
#define E 2.71828182846
double Exponent(int x){
return Power(E, x);
}

double Power(double x , int y) {
   double sum=1;
   if(y==0&&x==0)return 000.000;
    if(y==0)return 1;
    if(y>0){
for(int i=0; i<y; i++){
    sum=sum*x;
}
return sum;
    }
    else{
for(int i=y; i<0; i++){
    sum=sum/x;
}
return sum;
    }
}
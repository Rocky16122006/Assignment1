
#include<stdio.h> 
 int main()
{
    float p,r,t,si;
    printf("enter the value of principal,rate and time:");
    scanf("%f %f %f",&p,&r,&t);
    si = (p * r * t) / 100;
    printf("simple interest is = %f",si);
    return 0;
}


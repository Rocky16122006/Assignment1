#include<stdio.h>

int main()
{
    float c,f;
    printf("Enter the value of celcius:");
    scanf("%f",&c);
    f = (c * 9/5) + 32; //that is used to convert celcius to fahrenheit
    printf("fahrenheit = %f",f);
    return 0;
}


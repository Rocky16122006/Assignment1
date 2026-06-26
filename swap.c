 #include<stdio.h>

int main()
{
    int a,b,temp;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    temp = a; //that is used to swap two number using third variable
    a = b;
    b = temp;
    printf("after swapping values of a = %d and b = %d",a,b);
    return 0;
}
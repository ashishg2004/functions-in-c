#include<stdio.h>
#include<math.h>

int square(double num);

int main()
{
    double num;
    int n;
    printf("enter the number \n");
    scanf("%lf",&num);
    n=square(num);
    printf("the square of the given number is %d",n);
    return 0;
}

int square(double num)
{
    double square=num*num;
    return square;
}
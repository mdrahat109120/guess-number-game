#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);
    sum= num1+num2;
    printf("the sum is=%d\n",sum);
    avg=(float)sum/2;
    printf("the average is=%.2f\n",avg);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b;
    float sum=0.0,total;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        total=(float)1/b;
        sum=sum+total;
    }
    printf("%.2f",sum);
}
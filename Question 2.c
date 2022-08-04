#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    float avg;
    printf("Enter the ten numbers");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
     sum+=a[i];
     }
     avg=sum/10.0;
        printf("sum is %f",avg);

}


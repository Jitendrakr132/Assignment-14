#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    printf("Enter the ten numbers");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
     sum+=a[i];
     }
        printf("sum is %d",sum);

}

#include<stdio.h>
int main()
{
    int a[10];
    int i,min1,min2;
    printf("Enter the numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    {
        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2&&a[i]>min1)
        {
            min2=a[i];
        }
    }
    printf("\nFirst smallest numbers %d",min1);
    printf("\nSecond smallest numbers %d",min2);

}

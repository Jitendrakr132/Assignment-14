#include<stdio.h>
int main()
{
    int a[10],i;
    int max1,max2;
    printf("Enter the numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    max2=max1;
    for(i=0;i<=9;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2&&a[i]<max1)
        {
            max2=a[i];
        }

    }
        printf("first largested number %d ",max1);

    printf("Second largested number %d ",max2);

}

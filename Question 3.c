#include<stdio.h>
int main()
{
    int i, a[10];
    int se=0,so=0;
    printf("Enter the ten numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
    if(a[i]%2==0)
       {
        se+=a[i];
       }
   else
    {
        so+=a[i];
    }
    }
       printf("\n Sum is Even %d",se);
       printf("\n Sum is odd numbers %d ",so);

}


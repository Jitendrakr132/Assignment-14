#include<stdio.h>
int main()
{
    int a[10],temp,i;
    printf("Enter the numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
  for(i=0;i<=9/2;i++)
  {

      temp=a[i];
      a[i]=a[9-i-1];
      a[9-i-1]=temp;
  }
  for(i=0;i<=9;i++)
  printf("%d ",a[i]);
}

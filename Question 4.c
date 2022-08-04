#include<stdio.h>
int main()
{

    int i,a[10],max;
    printf("Enter the number");
    for(i=0;i<=9;i++)

        scanf("%d",&a[i]);
        max=a[0];
  for(i=0;i<=9;i++)
  {

         if(max<a[i])
         {
           max=a[i];
         }
  }
        printf("greatest number %d",max);


}








#include<stdio.h>
int main()
{

    int i,a[10],min;
    printf("Enter the number");
    for(i=0;i<=9;i++)

        scanf("%d",&a[i]);
        min=a[0];
  for(i=0;i<=9;i++)
  {

         if(a[i]<min)
         {
           min=a[i];
         }
  }
        printf("smallest number %d",min);


}









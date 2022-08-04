#include<stdio.h>
int main()
{
    int a1[10],a2[10];
    int i;
    printf("Enter the numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a1[i]);
      for(i=0;i<=9;i++)
      {
          a2[i]=a1[i];
      }
      for(i=0;i<=9;i++)
      {
        printf("\n Array element %d ",a1[i]);
      }
        for(i=0;i<=9;i++)
        {

        printf("\n copy array %d ",a2[i]);
        }

    }

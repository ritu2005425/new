#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[6],i;
   int *p;
   p=&a;
   printf("enter elemet");
   for(i=0;i<6;i++)
   {

       scanf("%d",&a[i]);

   }
   n=*p;
   for(i=0;i<6;i++)
   {

       if(a[i]>*p)
       {
           int temp;

           temp=a[i];
          a[i]=*p;
          *p=temp;

       }

    }
printf("%d",*p);
return 0;
}


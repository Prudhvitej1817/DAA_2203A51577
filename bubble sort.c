#include<stdio.h>
int main()
{
     int i,j,n;
     printf("Enter n number of elements to sort \n");
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     }
     printf("The array is :\n");
     for(i=0;i<n;i++)
     {
     printf("%d\t",a[i]);
     }
     printf("\n");
     int temp=0;
     for(i=0;i<n;i++)
     {
      for(j=0;j<n;j++)
      {
           if(a[i]>a[j]) 
           {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           }
     }
     }
     printf("The sorted array in descending order is  :\n");
     for(i=n-1;i>=0;i--)
     {
     printf("%d\t",a[i]);
     }  
     printf("\n");
     printf("The sorted array in ascending order is  :\n");
     for(i=0;i<n;i++)
     {
     printf("%d\t",a[i]);
     } 
}

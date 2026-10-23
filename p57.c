//wap in c array sorting 
#include<stdio.h>
int main()
{
	int a[100], n,i,j,temp;
	printf("enter the element of array");
	scanf("%d",&n);
	printf("enter the elemnet of array");
	for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
    }
    printf("Display the element of original array\n");
	for (i=0;i<n;i++)
   {
   	printf("%d\t",a[i]);
   }
   for(i=0;i<n;i++)
   {
   	printf("%d\t",a[i]);
   }
   //loop to sort array  
   for (i=0;i<n;i++)
   {
   	for(j=i+1;j<n;j++)
    {
     if(a[i]>a[j])
	{
		temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
   }
   printf("\n Display the element of sorted array\n");
   for(i=0;i<n;i++)
   {
   	printf("%d\t",a[i]);
   }

   
   }
   }

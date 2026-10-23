//WAP IN C REVERSE ARRAY 
#include<stdio.h>
int main()
{
	int a[100],i,j,n,temp;
	printf("enter the no of element of array");
	scanf("%d",&n);
	printf("enter the element of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display the element of original array\n");
	for(i=0;i<n;i++)
	{
	   printf("%d",&a[i]);
	}
 
#include <stdio.h>

int main()
{
    int a[100], i, n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Display the original array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("\nDisplay the reverse array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    

}
}


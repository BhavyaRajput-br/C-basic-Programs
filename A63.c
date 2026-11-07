#include <stdio.h>  

int main() {  

    int arr[10], sum = 0;  

    float avg;   

    printf("Enter 10 integers:\n");  
int i=0;
    for ( i = 0; i < 10; i++) {   

        scanf("%d", &arr[i]);  

        sum += arr[i];  

    }  

    avg = (float)sum / 10;  

    printf("Sum = %d\n", sum);   

    printf("Average = %.2f\n", avg);  

      

}  

// WAP to accept marks of five subjects from user
// and calculate total marks and percentage

#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5, total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;

    percentage = (total / 500.0) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f", percentage);

    return 0;
}

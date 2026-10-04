#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int num1, num2;
    float float1, float2;

    // Read integer and float inputs
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &float1, &float2);

    // Print integer sum and difference
    printf("%d %d\n", num1 + num2, num1 - num2);

    // Print float sum and difference rounded to 1 decimal place
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);

    return 0;
}

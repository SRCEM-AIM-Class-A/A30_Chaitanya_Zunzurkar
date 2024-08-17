// Create a two dimensional vector using structures
#include <stdio.h>

struct TwoDimensionalVector
{
    float x;
    float y;
}V1;

int main()
{
    printf("Printing 2D vector in 1st quadrant.\n");
    printf("Enter Dimension in X :");
    scanf("%f", &V1.x);

    printf("Enter Dimension in Y:");
    scanf("%f", &V1.y);

    printf("Two Dimensional Vector is %.1f i + %.1f j.\n", V1.x , V1.y);
    
    return 0;
}

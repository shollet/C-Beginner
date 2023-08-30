/*
 * Author: Shayan
 * Purpose: This program is going to calculate the area and the perimeter of a rectangle
 */

#include <stdio.h>

int main()
{
    // declaring variables
    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;
    
    // performing perimeter calculation
    perimeter = (height + width) * 2.0;
    area = width * height;
    
    //displaying input
    printf("Height = %.2f\nWidth = %.2f\nPerimeter = %f\nArea = %f\n", height, width, perimeter, area);
	return 0;
}

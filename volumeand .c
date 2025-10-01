#include <stdio.h>
#define PI 3.1416// Define constant value of PI
int main()
 {
    float radius, height, volume, surface_area;
    //user enters radius and height
    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter height of the cylinder: ");
    scanf("%f", &height);
    //calculation of volume and surface are
    volume = PI * radius * radius * height;
    surface_area = (2 * PI * radius * height) + (2 * PI * radius * radius);
	//Displaying the results
    printf("Volume of Cylinder = %.2f\n", volume);
    printf("Surface Area of Cylinder = %.2f\n", surface_area);

    return 0;
}

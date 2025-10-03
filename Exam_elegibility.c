/*
	ROBIN KIPKORIR MUTAI
	PA106/G/28705/25
*/

#include <stdio.h>//starndard input output

int main()
 {
    float attendance, marks;
    // user to enter ther attendnce percentage and marks
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    printf("Enter average marks: ");
    scanf("%f", &marks);
    //checking eligibility
    if (attendance >= 75 && marks >= 40) 
        printf("Eligible for final exams.\n");
    else 
        printf("Not eligible.\n");
    

    return 0;//program ends

}

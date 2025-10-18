#include <stdio.h>//input output 

float calculateElectricBill(int units);//function prototype 

int main()
 {
    int units;// Variable to store the number of units consumed
    float totalBill;// Variable to store the total bill amount
    printf("Enter units consumed: ");//user to enter the number of units consumed
    scanf("%d", &units);//Read input from the user

    totalBill = calculateElectricBill(units);//Call the function calculateElectricBill() and store the result in totalBill
    printf("Total Bill = KSh. %.2f\n", totalBill);// Display the total bill amount with two decimal places

    return 0;
 }
// Function definition to calculate the electric bill
float calculateElectricBill(int units)
 {
    float bill;// Variable to hold the calculated bill

    if (units <= 100)//// If the units are less than or equal to 100
        bill = units * 10;// Charge KSh.10 per unit
    else if (units <= 200) // If the units are between 101 and 200
        bill = (100 * 10) + ((units - 100) * 15);// First 100 units @10 and  the remaining units from the previous calculation @15
    else
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);//First 100 units @10,second 100 units @15 and the remaining @20

    return bill;
 }



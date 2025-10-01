#include <stdio.h>
int main()
 {
    int units;//to store no of water units 
    double bill;//calculated bill
    //user to enter no of water unit consumed 
    printf("Enter water units consumed: ");
    scanf("%d", &units);
    // Calculate based on unit price 
    if (units <= 30) 
        bill = (units * 20);
     else if (units <= 60) 
        bill = (units * 25);
     else 
        bill = (units * 30);
     printf("Total water bill: %.2lf KES\n", bill);
     return 0;
 }
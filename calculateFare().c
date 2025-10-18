#include <stdio.h>// Include standard input/output

int calculateFare(int distance);// Function prototype 

int main() {
    int distance;// Variable to store the distance traveled (in kilometers)
    int totalFare;// Variable to store the total fare

    printf("Enter distance traveled (in km): ");// Prompt the user to enter the distance traveled
    scanf("%d", &distance);// Read input 

    totalFare = calculateFare(distance);// Call the function calculateFare() 

    printf("Total Fare = KSh.%d\n", totalFare);// Display the total fare 

    return 0; 
}

// Function definition
int calculateFare(int distance) 
{
    int fare;// Variable to hold the fare amount

    fare = distance * 50;// KSh. 50 per kilometer

    return fare;
}

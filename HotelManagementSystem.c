/*
	ROBIN KIPKORIR MUTAI
	PA106/G/28705/25
*/
#include <stdio.h>


int main() {

    
    // PART 1: 1D ARRAY – Weekly Revenue Tracker
  

    float revenue[7];// Array to hold daily revenue for 7 days
    float totalRevenue = 0;// To store total revenue
    float averageRevenue;// To store average revenue

    printf(" Weekly Revenue Tracker \n");

    int i;
    for (i = 0; i < 7; i++) {  // Loop for 7 days
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);   // Read revenue for each day
        totalRevenue += revenue[i];
    }

    // Calculate average revenue
    averageRevenue = totalRevenue / 7.0;

    // Display total and average revenue
    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n", averageRevenue);

    // PART 2: 2D ARRAY – Room Occupancy (One Branch)


    int occupancy[5][10];  // 5 floors × 10 rooms per floor
    int occupied, vacant;

    printf("\nRoom Occupancy (One Branch)\n");

    // Simulated occupancy data (1 = occupied, 0 = vacant)
    int simulatedOccupancy[5][10] = {
        {1, 0, 1, 1, 0, 1, 0, 1, 1, 0},
        {1, 1, 0, 0, 1, 0, 1, 1, 0, 0},
        {0, 0, 1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 1, 0, 1, 0},
        {0, 1, 1, 1, 0, 1, 1, 1, 0, 0}
    };

    // Copy simulated data into occupancy array
    int floor, room;
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = simulatedOccupancy[floor][room];

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        // Display occupancy summary per floor
        printf("Floor %d  Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    // PART 3: 3D ARRAY – Multiple Branches
    
    int data[3][5][10];   // 3 branches × 5 floors × 10 rooms
    int totalOccupied = 0; // Total occupied rooms across all branches

    printf("\n Multiple Branches Occupancy\n");

    // Simulated data for 3 branches
    int simulateddata[3][5][10] = {
        {   // Branch 1
            {1, 0, 1, 1, 0, 1, 0, 1, 1, 0},
            {1, 1, 0, 0, 1, 0, 1, 1, 0, 0},
            {0, 0, 1, 1, 1, 0, 0, 1, 1, 1},
            {1, 1, 1, 0, 0, 0, 1, 0, 1, 0},
            {0, 1, 1, 1, 0, 1, 1, 1, 0, 0}
        },
        {   // Branch 2
            {0, 1, 1, 1, 0, 1, 1, 0, 1, 1},
            {1, 0, 0, 1, 1, 0, 0, 1, 1, 0},
            {0, 1, 1, 1, 0, 0, 1, 0, 1, 1},
            {1, 1, 0, 1, 0, 1, 1, 1, 0, 0},
            {0, 0, 1, 0, 1, 0, 1, 1, 0, 1}
        },
        {   // Branch 3
            {1, 1, 1, 0, 1, 0, 1, 0, 1, 1},
            {0, 1, 0, 1, 1, 1, 0, 0, 1, 0},
            {1, 1, 1, 1, 0, 0, 1, 1, 1, 0},
            {0, 0, 1, 0, 1, 0, 1, 1, 0, 1},
            {1, 0, 1, 1, 1, 1, 0, 1, 0, 0}
        }
    };

    // Copy simulated data and count occupancy
int branch;
for (branch = 0; branch < 3; branch++) {   // Loop through 3 branches
    for (floor = 0; floor < 5; floor++) {  // Loop through 5 floors per branch
        for (room = 0; room < 10; room++) { // Loop through 10 rooms per floor

            // Copy simulated occupancy data for each room
            data[branch][floor][room] = simulateddata[branch][floor][room];

            // Check if the room is occupied
         
            if (data[branch][floor][room] == 1)
                totalOccupied++;  // Increase count if room is occupied
        }
    }
}

// Calculate total number of rooms in all branches
int totalRooms = 3 * 5 * 10;  // = 150 total rooms

// Calculate total number of vacant rooms
int totalVacant = totalRooms - totalOccupied;

// Display results to the user
printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);
printf("Total Vacant Rooms Across All Branches: %d\n", totalVacant);

// End of program
return 0;

}
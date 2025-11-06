#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;

    file = fopen("sales.txt", "r"); // Open file for reading
    if (file == NULL) {
        printf("Error opening sales.txt\n");
        return 1;
    }

    // Read each transaction and sum up
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file); //  close the file
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}

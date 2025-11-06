/*
	ROBIN KIPKORIR MUTAI
	PA106/G/28705/25
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a"); // Open in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    while (1) {
        printf("Book Title: ");
        fgets(title, sizeof(title),stdin );

        fprintf(file, "%s", title); // Save title in file
        printf("Title stored successfully!\n");
    }

    fclose(file);
    
    return 0;
}


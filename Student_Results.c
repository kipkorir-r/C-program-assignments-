#include <stdio.h>

struct Student {
    char name[50];
    char reg_no[20];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student s;

    file = fopen("results.dat", "rb"); // Open for reading in binary mode
    if (file == NULL) {
        printf("Error: Could not open results.dat\n");
        return 1;
    }

    printf("Student Results:\n");
   

    // Read until end of file
    while (fread(&s, sizeof(s), 1, file) == 1) {
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n\n", s.total_marks);
}

    fclose(file);
    return 0;
}

#include <stdio.h>

struct Student {
    char name[50];
    char course[50];
};

int main() {
    struct Student students[3];

    printf("Enter details for 3 students:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter course: ");
        scanf("%s", students[i].course);
    }

    
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        fprintf(file, "Student Name: %s, Course: %s\n", students[i].name, students[i].course);
    }

    fclose(file);

    printf("Data has been written to data.txt successfully!\n");

   
}
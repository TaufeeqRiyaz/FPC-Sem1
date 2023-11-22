#include <stdio.h>
#include <string.h>

int main() {
    int numStudents, i, j;
    
    printf("Enter the number of students - ");
    scanf("%d", &numStudents);
    
    char studentNames[numStudents][50];
    
    for (i = 0; i < numStudents; i++) {
        printf("Enter name for student %d - ", i + 1);
        scanf("%s", studentNames[i]);
    }
    
    for (i = 0; i < numStudents - 1; i++) {
        for (j = 0; j < numStudents - i - 1; j++) {
            if (strcmp(studentNames[j], studentNames[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, studentNames[j]);
                strcpy(studentNames[j], studentNames[j + 1]);
                strcpy(studentNames[j + 1], temp);
            }
        }
    }
    

    printf("\nSorted names -\n");
    for (i = 0; i < numStudents; i++) {
        printf("%s\n", studentNames[i]);
    }
    
    return 0;
}

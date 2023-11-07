#include <stdio.h>

int main() {
    int side;
    printf("Enter the side length of the Rubik's cube - ");
    scanf("%d", &side);
    
    int volume = side * side * side;
    printf("The volume of the Rubik's cube is %d\n", volume);

    return 0;
}

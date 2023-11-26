#include <stdio.h>

int main(){
    int hardness, carbon_content, tensile_strength;
    printf("Enter the hardness of the steel - ");
    scanf("%d", &hardness);
    printf("Enter the carbon content of the steel - ");
    scanf("%d", &carbon_content);
    printf("Enter the tensile strength of the steel - ");
    scanf("%d", &tensile_strength);
    if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600){
        printf("Grade 10");
    }
    else if (hardness > 50 && carbon_content < 0.7){
        printf("Grade 9");
    }
    else if (carbon_content < 0.7 && tensile_strength > 5600){
        printf("Grade 8");
    }
    else if (hardness > 50 && tensile_strength > 5600){
        printf("Grade 7");
    }
    else if (hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600){
        printf("Grade 6");
    }
    else{
        printf("Grade 5");
    }
}
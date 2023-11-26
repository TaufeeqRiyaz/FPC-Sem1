#include <stdio.h>

int main(){

int age, gender, married;

printf("Enter your age - ");
scanf("%d", &age);
printf("Enter your gender, choose 1 for male and 2 for female - ");
scanf("%d", &gender);
printf("Enter your marital status, choose 1 for married and 2 for unmarried - ");
scanf("%d", &married);

if (married==1){
    printf("You are insured");
} 

else if(married==2 && gender==1 && age > 30){
    printf("You are insured");
}
else if(married==2 && gender==2 && age > 25){
    printf("You are insured");
}
else{
    printf("You are not insured");

}
}
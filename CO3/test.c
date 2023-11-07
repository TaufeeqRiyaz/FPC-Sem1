#include <stdio.h>

int main(){
    
    int num_1;
    
    scanf("%d", &num_1);
    
    if (num_1==1){
        printf("one");
    }
    else if(num_1==2){
        printf("two");
    }
    else if(num_1==3){
        printf("three");
    }
    else if(num_1==4){
        printf("four");
    }
    else if(num_1==5){
        printf("five");
    }
    else if(num_1==6){
        printf("six");
    }
    else if(num_1==7){
        printf("seven");
    }
    else if(num_1==8){
        printf("eight");
    }
    else if(num_1==9){
        printf("nine");
    }
    else if(num_1>9){
        printf("Greater than 9");
    }
    else{
        printf("Invalid input");
    }
}
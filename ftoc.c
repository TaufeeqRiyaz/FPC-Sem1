#include <stdio.h>

int main(){
    int temparature;
    printf("Enter the temperature in farenhiet - ");
    scanf("%d", &temparature);

    temparature = (temparature - 32) * 5 / 9;

    printf("The temperature in celcius is %d", temparature);
}
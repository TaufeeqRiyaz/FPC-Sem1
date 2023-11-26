#include <stdio.h>

int main(){

int temperature;

printf("Enter the temperature in celcius - ");
scanf("%d",&temperature);

temperature = (9/5)*temperature + 32;

printf("The temperature in farenhiet is %d", temperature);

}

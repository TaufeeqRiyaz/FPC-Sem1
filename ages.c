#include <stdio.h>

int main(){

int ram, shyam, ajay;

printf("Enter the age of Ram - ");
scanf("%d",&ram);
printf("Enter the age of Shyam - ");
scanf("%d",&shyam);
printf("Enter the age of Ajay - ");
scanf("%d",&ajay);

if(ram<shyam && ram<ajay)
{
    printf("Ram is the youngest");
}
else if(shyam<ram && shyam<ajay)
{
    printf("Shyam is the youngest");
}
else
{
    printf("Ajay is the youngest");
}

}


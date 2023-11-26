// write a program to store elements in an array and check the size and bound of that array defined and print the elements

#include<stdio.h>

int main(){

int n;
printf("Enter the size of the array - ");
scanf("%d",&n);

int arr[n];
printf("Enter the elements of the array - ");

for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

printf("The size of the array is - %d\n",sizeof(arr));
printf("The bound of the array is - %d\n",sizeof(arr)/sizeof(arr[0]));

printf("The elements of the array are - ");

for(int i=0;i<n;i++)
{
printf("%d ",arr[i]);

}
}
// Given a five digit integer, print the sum of its digits.
// 
// Input Format
// 
// The input contains a single five digit number, .
// 
// Constraints
// 
// 
// Output Format
// 
// Print the sum of the digits of the five digit number.
// 
// Sample Input 0
// 
// 10564
// Sample Output 0
// 
// 16

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum=0;
    int temp=n;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    printf("%d",sum);
    return 0;
}
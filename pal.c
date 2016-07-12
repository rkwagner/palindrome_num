#include <stdio.h>

void main(){
    int num, sum;

    printf("Enter a number to check for palindrome: ");
    scanf("%d", &num);

    int temp = num;
    while(temp){
        int lowest = temp%10;
        sum = sum + lowest;
        sum = sum * 10;
        temp = temp / 10;
    }
    if(sum/10 == num)
        printf("%d is a Palindrome number.\n", num);
    else
        printf("%d is NOT a Palindrome number.\n", num);
}

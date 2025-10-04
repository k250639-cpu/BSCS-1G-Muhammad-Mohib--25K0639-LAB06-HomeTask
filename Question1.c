#include <stdio.h>
int main() {
    int number, temp, remainder, pnum = 0;
    printf("Enter the number to be checked: ");
    scanf("%d", &number);
    if(number < 10){
        printf("%d is a single digit, so it is a palindrome", number);
    }else{
        temp = number;
        while (temp != 0){
            remainder = temp % 10;
            pnum = pnum * 10 + remainder;    
            temp /= 10;                      
        }
        if (number == pnum) {
            printf("%d is a palindrome\n", number);
            
        } else {
            printf("%d is not a palindrome\n", number);
        }
    }
    return 0;
}

#include <stdio.h>
int main() {
    int number, temp, total=0, rem;
    printf("Enter number: ");
    scanf("%d", &number);
    if(number < 10){
        printf("Since number is a single digit, %d is the sum of it's own digits", number);
    }else{
        temp = number;
        while(temp != 0){
            rem = temp % 10;
            total += rem;
            temp /= 10;
        }
        printf("The sum of digits of %d is %d", number, total);
    }
    return 0;
}

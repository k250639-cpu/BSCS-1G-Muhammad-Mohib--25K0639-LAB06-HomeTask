#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number to be checked whether it's perfect or not.\nnum = ");
    scanf("%d", &num);
    while (num <= 0) {
        printf("Invalid number, try again: ");
        scanf("%d", &num);
    }
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (num == sum) {
        printf("%d is a perfect number.", num);
    } else {
        printf("%d is not a perfect number.", num);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int num;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &num);
    while (num <= 0) {
        printf("Invalid number, try again: ");
        scanf("%d", &num);
    }
    for (int i = 1; i <= num; i++) {
        for (int s = 1; s <= num - i; s++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

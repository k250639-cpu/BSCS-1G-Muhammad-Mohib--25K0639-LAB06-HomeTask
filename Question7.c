#include <stdio.h>
int main() {
    int row = 0, prev = 0, num = 1, count = 1, temp=0;
    printf("Enter the number of rows you want to print(fibonacci style): ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= count; j++) {
            printf("%d ", num);
            num += 1;
        }
        printf("\n");
        temp = count;
        count = count + prev;
        prev = temp;
    }
    return 0;
}

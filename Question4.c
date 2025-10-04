#include <stdio.h>
int main() {
    int min, max, temp;
    printf("Enter the minimum value for which you want the multiplication tables: ");
    scanf("%d", &min);
    printf("Enter the maximum value for which you want the multiplication tables: ");
    scanf("%d", &max);
    for (int i = min; i <= max; i++) {          
        printf("\nMultiplication Table of %d:\n", i);
        for (int j = 1; j <= 10; j++) {          
            temp = i * j;
            printf("%d x %d = %d\n", i, j, temp);
        }
    }
    return 0;
}

#include <stdio.h>
int main() {
    int num, even= 0, odd=0;
    for(int i = 1; i <11; i++){
        printf("Enter the %d number: ", i);
        scanf("%d", &num);
        if( num % 2 == 0){
            even += 1;
        }else{
            odd += 1;
        }
    }
    printf("The amount of odd integers are --> %d\n", odd);
    printf("The amount of even integers are --> %d", even);
    return 0;
}

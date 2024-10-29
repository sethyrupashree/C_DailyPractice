#include <stdio.h>

int main() {
    int num, new_n = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        int d = num % 10; 
        num /= 10; 
        if (d == 0) {
            d = 1;
        } else if (d == 1) {
            d = 0;
        }

        new_n += d * place;
        place *= 10;
    }

    printf(" number: %d\n", new_n);
    return 0;
}
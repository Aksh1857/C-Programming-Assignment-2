#include <stdio.h>
#include <stdlib.h>

int reverse_number(int n) {
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

int beautifulDays(int i, int j, int k) {
    int count = 0;

    for (int day = i; day <= j; day++) {
        if (abs(day - reverse_number(day)) % k == 0) {
            count++;
        }
    }

    return count;
}

int main(void) {
    int i, j, k;

    if (scanf("%d %d %d", &i, &j, &k) != 3) {
        return 0;
    }

    printf("%d\n", beautifulDays(i, j, k));
    return 0;
}
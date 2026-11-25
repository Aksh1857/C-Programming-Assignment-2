#include <stdio.h>

int* reverseArray(int a_count, int* a, int* result_count) {
    *result_count = a_count;

    for (int i = 0; i < a_count / 2; i++) {
        int temp = a[i];
        a[i] = a[a_count - 1 - i];
        a[a_count - 1 - i] = temp;
    }

    return a;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result_count;
    int* result = reverseArray(n, a, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%d%s", result[i], i == result_count - 1 ? "\n" : " ");
    }

    return 0;
}
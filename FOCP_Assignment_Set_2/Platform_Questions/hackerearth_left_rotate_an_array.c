#include <stdio.h>
int main(void) {
    int n, d;
    if (scanf("%d %d", &n, &d) != 2 || n <= 0) return 0;
    int a[n];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    d %= n;
    for (int i = 0; i < n; ++i) printf("%d%c", a[(i + d) % n], i + 1 == n ? '\n' : ' ');
    return 0;
}

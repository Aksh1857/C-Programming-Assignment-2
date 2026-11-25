#include <stdio.h>
int countMultiples(int n, int k) { return (n > 0 && k > 0) ? n / k : 0; }
int main(void) { int n,k; if (scanf("%d%d", &n,&k)!=2) return 0; printf("%d\n", countMultiples(n,k)); return 0; }

#include <stdio.h>
int main(void) { long long x, y; if (scanf("%lld", &x)!=1) return 0; if (x<0) y=x*x+2*x+1; else if (x<10) y=3*x+2; else y=5*x-7; printf("%lld\n", y); return 0; }

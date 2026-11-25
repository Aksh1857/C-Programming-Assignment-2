#include <stdio.h>
int main(void) { long long total; if (scanf("%lld", &total)!=1) return 0; long long h=total/3600, m=(total%3600)/60, s=total%60; printf("%lld %lld %lld\n", h,m,s); return 0; }

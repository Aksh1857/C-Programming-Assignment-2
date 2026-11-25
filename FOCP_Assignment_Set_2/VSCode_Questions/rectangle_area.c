#include <stdio.h>
long long rectangleArea(long long length, long long width) { return length * width; }
int main(void) { long long l,w; if (scanf("%lld%lld", &l,&w)!=2) return 0; printf("%lld\n", rectangleArea(l,w)); return 0; }

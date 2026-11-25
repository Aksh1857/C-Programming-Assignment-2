#include <stdio.h>
int isPerfectSquare(long long n) { if (n < 0) return 0; long long lo=0, hi=3037000500LL; while(lo<=hi){long long mid=lo+(hi-lo)/2; if(mid==0){if(n==0)return 1;lo=1;continue;} if(mid==n/mid && n%mid==0)return 1; if(mid>n/mid)hi=mid-1;else lo=mid+1;} return 0; }
int main(void) { long long n; if (scanf("%lld", &n)!=1) return 0; printf("%d\n", isPerfectSquare(n)); return 0; }

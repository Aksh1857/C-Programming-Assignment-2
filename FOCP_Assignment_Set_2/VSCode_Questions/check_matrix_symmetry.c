#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1||n<1||n>100)return 0;long long a[100][100];for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%lld",&a[i][j]);int ok=1;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i][j]!=a[j][i])ok=0;puts(ok?"YES":"NO");return 0;}

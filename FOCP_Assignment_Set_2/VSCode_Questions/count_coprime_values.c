#include <stdio.h>
int gcd(int a,int b){while(b){int r=a%b;a=b;b=r;}return a;}
int main(void){int n,m;if(scanf("%d%d",&n,&m)!=2||n<=0||m<0)return 0;int count=0;for(int x=1;x<=m;x++)if(gcd(x,n)==1)count++;printf("%d\n",count);return 0;}

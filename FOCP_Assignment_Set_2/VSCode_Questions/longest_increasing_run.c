#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1||n<=0||n>100000)return 0;long long prev,x;scanf("%lld",&prev);int cur=1,best=1;for(int i=1;i<n;i++){scanf("%lld",&x);if(x>prev)cur++;else cur=1;if(cur>best)best=cur;prev=x;}printf("%d\n",best);return 0;}

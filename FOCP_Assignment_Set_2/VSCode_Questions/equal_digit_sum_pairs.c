#include <stdio.h>
int digitSum(int x){int s=0;while(x){s+=x%10;x/=10;}return s;}
int main(void){int n;if(scanf("%d",&n)!=1||n<0||n>100000)return 0;int a[100000];for(int i=0;i<n;i++)scanf("%d",&a[i]);long long pairs=0;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(digitSum(a[i])==digitSum(a[j]))pairs++;printf("%lld\n",pairs);return 0;}

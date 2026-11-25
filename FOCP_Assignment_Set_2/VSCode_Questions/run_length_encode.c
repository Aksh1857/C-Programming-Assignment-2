#include <stdio.h>
#include <string.h>
int main(void){char s[10001];if(scanf("%10000s",s)!=1)return 0;int n=(int)strlen(s);for(int i=0;i<n;){int j=i+1;while(j<n&&s[j]==s[i])j++;printf("%c%d",s[i],j-i);i=j;}putchar('\n');return 0;}

#include <stdio.h>
#include <ctype.h>
int main(void){char line[10001];if(!fgets(line,sizeof line,stdin))return 0;int v=0,c=0,d=0,s=0;for(int i=0;line[i];i++){unsigned char ch=(unsigned char)line[i];if(ch==' ')s++;else if(isdigit(ch))d++;else if(isalpha(ch)){char x=(char)tolower(ch);if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;else c++;}}printf("%d %d %d %d\n",v,c,d,s);return 0;}

#include <stdio.h>
int main(void) {
    char ch, word[1001], line[1001];
    if (scanf("%c", &ch) != 1) return 0;
    scanf("%1000s", word);
    int c; while ((c = getchar()) != '\n' && c != EOF) { }
    if (fgets(line, sizeof line, stdin) == NULL) line[0] = '\0';
    printf("%c\n%s\n%s", ch, word, line);
    return 0;
}

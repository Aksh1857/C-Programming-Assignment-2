#include <string.h>
int strStr(char* haystack, char* needle) {
    if (*needle == '\0') return 0;
    int h = (int)strlen(haystack), n = (int)strlen(needle);
    for (int i = 0; i <= h - n; ++i)
        if (strncmp(haystack + i, needle, (size_t)n) == 0) return i;
    return -1;
}

#include <stdbool.h>
#include <string.h>
bool isIsomorphic(char* s, char* t) {
    int st[256], ts[256];
    for (int i = 0; i < 256; ++i) st[i] = ts[i] = -1;
    for (int i = 0; s[i] && t[i]; ++i) {
        unsigned char a = (unsigned char)s[i], b = (unsigned char)t[i];
        if (st[a] != ts[b]) return false;
        st[a] = ts[b] = i;
    }
    return strlen(s) == strlen(t);
}

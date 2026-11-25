void reverseString(char* s, int sSize) {
    for (int left = 0, right = sSize - 1; left < right; ++left, --right) {
        char temp = s[left]; s[left] = s[right]; s[right] = temp;
    }
}

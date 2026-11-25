int maximum_of_four(int a, int b, int c, int d) {
    int best = a;
    if (b > best) best = b;
    if (c > best) best = c;
    if (d > best) best = d;
    return best;
}

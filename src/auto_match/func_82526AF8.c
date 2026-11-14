/* Binary search of a sorted name table; returns the index of key or -1. */
int fn_82526AF8(int count, const unsigned char **names, const unsigned char *key)
{
    int lo;
    int hi;
    int mid;
    int cmp;
    unsigned char a;
    unsigned char b;
    const unsigned char *s;

    if (*key != 0) {
        hi = count - 1;
        lo = 0;
        while (lo <= hi) {
            mid = (lo + hi) >> 1;
            s = names[mid];
            a = *s;
            b = *key;
            if (a == b) {
                int offset = key - s;
                do {
                    s++;
                    if (a == 0)
                        return mid;
                    a = *s;
                    b = s[offset];
                } while (a == b);
            }
            cmp = a - b;
            if (cmp < 0)
                lo = mid + 1;
            else if (cmp > 0)
                hi = mid - 1;
            else
                return mid;
        }
    }
    return -1;
}

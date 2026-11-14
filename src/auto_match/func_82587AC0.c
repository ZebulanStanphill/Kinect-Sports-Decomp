typedef struct Entry_82587AC0 {
    const unsigned char *name;
    unsigned int value;
    int pad8;
} Entry_82587AC0;

typedef struct Table_82587AC0 {
    char pad0[0x1c];
    Entry_82587AC0 *entries;    /* 0x1c */
    unsigned int count;         /* 0x20 */
} Table_82587AC0;

extern Table_82587AC0 lbl_831C0BB0;

/* Binary search of lbl_831C0BB0's name table; returns the matching entry's value or 0. */
unsigned int fn_82587AC0(const unsigned char *key)
{
    int lo;
    int hi;
    int mid;
    int cmp;
    unsigned char a;
    unsigned char b;
    const unsigned char *s;
    Entry_82587AC0 *entry;

    if (lbl_831C0BB0.entries != 0) {
        hi = lbl_831C0BB0.count - 1;
        lo = 0;
        while (lo <= hi) {
            mid = (lo + hi) >> 1;
            b = *key;
            entry = &lbl_831C0BB0.entries[mid];
            s = entry->name;
            a = *s;
            if (a == b) {
                int offset = key - s;
                do {
                    s++;
                    if (a == 0)
                        return entry->value;
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
                return entry->value;
        }
    }
    return 0;
}

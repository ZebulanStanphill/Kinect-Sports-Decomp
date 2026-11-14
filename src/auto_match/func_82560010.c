typedef struct Entry_82560010 {
    unsigned char name[0x5c];
} Entry_82560010;

typedef struct Table_82560010 {
    unsigned int count;
    Entry_82560010 *entries;
} Table_82560010;

/* Binary search of a table sorted by name; returns the entry or 0. */
Entry_82560010 *fn_82560010(Table_82560010 *table, const unsigned char *key)
{
    int lo;
    int hi;
    int mid;
    int cmp;
    unsigned char a;
    unsigned char b;
    const unsigned char *s;
    Entry_82560010 *entry;

    hi = table->count - 1;
    lo = 0;
    while (lo <= hi) {
        mid = (lo + hi) >> 1;
        b = *key;
        entry = &table->entries[mid];
        s = entry->name;
        a = *s;
        if (a == b) {
            int offset = key - s;
            do {
                s++;
                if (a == 0)
                    return entry;
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
            return entry;
    }
    return 0;
}

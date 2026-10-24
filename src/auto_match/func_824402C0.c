typedef struct Entry {
    int key2;               /* 0x00 */
    int pad4[0x11];
    int key1;               /* 0x48 */
    int pad4c[4];
} Entry;                    /* 0x5c */

static unsigned char Entry_less(Entry *a, Entry *b)
{
    return a->key1 < b->key1 || (b->key1 == a->key1 && b->key2 < a->key2);
}

static void Entry_swap(Entry *a, Entry *b)
{
    Entry tmp = *a;
    *a = *b;
    *b = tmp;
}

void fn_824402C0(Entry *a, Entry *b, Entry *c)
{
    if (Entry_less(a, b)) {
        Entry_swap(b, a);
    }
    if (Entry_less(b, c)) {
        Entry_swap(c, b);
    }
    if (Entry_less(a, b)) {
        Entry_swap(b, a);
    }
}

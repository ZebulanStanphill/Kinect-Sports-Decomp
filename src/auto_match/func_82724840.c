/* Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore) with the
   hash value cached in each entry; keys are tagged string pointers compared with strcmp. */
typedef struct String_82724840 {
    unsigned int data;
} String_82724840;

typedef struct Entry_82724840 {
    int next;
    unsigned int hash;
    String_82724840 value;
    int pad;
} Entry_82724840;

typedef struct Table_82724840 {
    int entryCount;
    unsigned int sizeMask;
    Entry_82724840 entries[1];
} Table_82724840;

typedef struct Hash_82724840 {
    Table_82724840 *table;
} Hash_82724840;

static __forceinline const char *Chars_82724840(unsigned int s)
{
    return (const char *)(s & ~3u) + 8;
}

int strcmp(const char *a, const char *b);

int fn_82724840(Hash_82724840 *h, String_82724840 *key, unsigned int hashValue)
{
    int index = hashValue;
    Entry_82724840 *e = &h->table->entries[index];
    if (e->next == -2 || e->hash != (unsigned int)index) {
        return -1;
    }
    for (;;) {
        if (e->hash == hashValue && strcmp(Chars_82724840(e->value.data), Chars_82724840(key->data)) == 0) {
            return index;
        }
        index = e->next;
        if (index == -1) {
            break;
        }
        e = &h->table->entries[index];
    }
    return -1;
}

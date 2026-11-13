/* Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore) with the
   hash value cached in each entry; keys are tagged string pointers compared with strcmp,
   the search key is reached through one more pointer. */
typedef struct String_826CC0E8 {
    unsigned int data;
} String_826CC0E8;

typedef struct Entry_826CC0E8 {
    int next;
    unsigned int hash;
    String_826CC0E8 value;
    int pad;
} Entry_826CC0E8;

typedef struct Table_826CC0E8 {
    int entryCount;
    unsigned int sizeMask;
    Entry_826CC0E8 entries[1];
} Table_826CC0E8;

typedef struct Hash_826CC0E8 {
    Table_826CC0E8 *table;
} Hash_826CC0E8;

static __forceinline const char *Chars_826CC0E8(unsigned int s)
{
    return (const char *)(s & ~3u) + 8;
}

int strcmp(const char *a, const char *b);

int fn_826CC0E8(Hash_826CC0E8 *h, String_826CC0E8 **key, unsigned int hashValue)
{
    int index = hashValue;
    Entry_826CC0E8 *e = &h->table->entries[index];
    if (e->next == -2 || e->hash != (unsigned int)index) {
        return -1;
    }
    for (;;) {
        if (e->hash == hashValue && strcmp(Chars_826CC0E8(e->value.data), Chars_826CC0E8((*key)->data)) == 0) {
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

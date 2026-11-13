/* Open-addressing hash set findIndex (Scaleform-style HashSetBase::findIndexCore) with the
   hash value cached in each entry; keys are tagged string pointers compared with strcmp. */
typedef struct String_8268A200 {
    unsigned int data;
} String_8268A200;

typedef struct Entry_8268A200 {
    int next;
    unsigned int hash;
    String_8268A200 value;
    int pad[3];
} Entry_8268A200;

typedef struct Table_8268A200 {
    int entryCount;
    unsigned int sizeMask;
    Entry_8268A200 entries[1];
} Table_8268A200;

typedef struct Hash_8268A200 {
    Table_8268A200 *table;
} Hash_8268A200;

static __forceinline const char *Chars_8268A200(unsigned int s)
{
    return (const char *)(s & ~3u) + 8;
}

int strcmp(const char *a, const char *b);

int fn_8268A200(Hash_8268A200 *h, String_8268A200 **key, unsigned int hashValue)
{
    int index = hashValue;
    Entry_8268A200 *e = &h->table->entries[index];
    if (e->next == -2 || e->hash != (unsigned int)index) {
        return -1;
    }
    for (;;) {
        if (e->hash == hashValue && strcmp(Chars_8268A200(e->value.data), Chars_8268A200((*key)->data)) == 0) {
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

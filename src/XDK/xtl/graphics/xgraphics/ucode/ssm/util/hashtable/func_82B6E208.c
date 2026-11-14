extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define HT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", line)

typedef void *(*Alloc_82B6E208)(void *context, unsigned int size);

typedef struct HashTable_82B6E208 {
    void **pHashTable;
    void *context;
    Alloc_82B6E208 alloc;
    void *free;
    void *listContext;
    unsigned int size;
} HashTable_82B6E208;

extern void *fn_82B6B340(void *listContext);

HashTable_82B6E208 *fn_82B6E208(void *context, Alloc_82B6E208 alloc, void *free, void *listContext, unsigned int size)
{
    HashTable_82B6E208 *pHashTable;
    unsigned int i;

    pHashTable = (HashTable_82B6E208 *)alloc(context, sizeof(HashTable_82B6E208));
    HT_ASSERT(pHashTable, 0x5e);
    pHashTable->context = context;
    pHashTable->alloc = alloc;
    pHashTable->free = free;
    pHashTable->listContext = listContext;
    pHashTable->size = size;
    pHashTable->pHashTable = (void **)alloc(context, size * sizeof(void *));
    for (i = 0; i < size; i++) {
        pHashTable->pHashTable[i] = fn_82B6B340(listContext);
        HT_ASSERT(pHashTable->pHashTable[i], 0x6e);
    }
    return pHashTable;
}

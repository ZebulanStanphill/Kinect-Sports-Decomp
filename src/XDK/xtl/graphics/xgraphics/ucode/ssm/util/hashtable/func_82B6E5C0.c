extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define HT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", line)

typedef void *(*Alloc_82B6E5C0)(void *context, unsigned int size);

typedef struct SHashTable_82B6E5C0 {
    void **pHashTable;
    void *context;
    Alloc_82B6E5C0 alloc;
    void *free;
    void *listContext;
    unsigned int size;
} SHashTable_82B6E5C0;

extern void *fn_82B6B340(void *listContext);

SHashTable_82B6E5C0 *fn_82B6E5C0(void *context, Alloc_82B6E5C0 alloc, void *free, void *listContext, unsigned int size)
{
    SHashTable_82B6E5C0 *pSHashTable;
    unsigned int i;

    pSHashTable = (SHashTable_82B6E5C0 *)alloc(context, sizeof(SHashTable_82B6E5C0));
    HT_ASSERT(pSHashTable, 0x1e0);
    pSHashTable->context = context;
    pSHashTable->alloc = alloc;
    pSHashTable->free = free;
    pSHashTable->listContext = listContext;
    pSHashTable->size = size;
    pSHashTable->pHashTable = (void **)alloc(context, size * sizeof(void *));
    HT_ASSERT(pSHashTable->pHashTable, 0x1ed);
    for (i = 0; i < size; i++) {
        pSHashTable->pHashTable[i] = fn_82B6B340(listContext);
        HT_ASSERT(pSHashTable->pHashTable[i], 0x1f4);
    }
    return pSHashTable;
}

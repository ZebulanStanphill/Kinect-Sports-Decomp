extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define HT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", line)

typedef struct ObjList_82B6E398 ObjList_82B6E398;

typedef struct HashTable_82B6E398 {
    ObjList_82B6E398 **table;
    void *ctx;
    int pad8;
    void (*dealloc)(void *, void *);
    void *owner;
    unsigned int numBuckets;
} HashTable_82B6E398;

extern void fn_82AB54D0(ObjList_82B6E398 *pOList, unsigned int key, void *data);

void fn_82B6E398(HashTable_82B6E398 *pHashTable, unsigned int key, void *data)
{
    ObjList_82B6E398 *pOList;

    HT_ASSERT(pHashTable, 0xb6);
    pOList = pHashTable->table[key % pHashTable->numBuckets];
    HT_ASSERT(pOList, 0xbd);
    fn_82AB54D0(pOList, key, data);
}

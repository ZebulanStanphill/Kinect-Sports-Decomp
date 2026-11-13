extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define HT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", line)

#define SSM_NULL 0

typedef struct ObjList_82B6E440 ObjList_82B6E440;

typedef struct HashTable_82B6E440 {
    ObjList_82B6E440 **table;
    void *ctx;
    int pad8;
    void (*dealloc)(void *, void *);
    void *owner;
    unsigned int numBuckets;
} HashTable_82B6E440;

extern void *fn_82AB56B8(ObjList_82B6E440 *pOList, unsigned int key);
extern void *fn_82AB5768(ObjList_82B6E440 *pOList);

void *fn_82B6E440(HashTable_82B6E440 *pHashTable, unsigned int key)
{
    ObjList_82B6E440 *pOList;
    void *data;
    void *secondMatch;

    HT_ASSERT(pHashTable, 0x105);
    pOList = pHashTable->table[key % pHashTable->numBuckets];
    HT_ASSERT(pOList, 0x10c);
    data = fn_82AB56B8(pOList, key);
    if (data != SSM_NULL) {
        secondMatch = fn_82AB5768(pOList);
        HT_ASSERT(secondMatch == SSM_NULL, 0x113);
        if (secondMatch != SSM_NULL)
            data = SSM_NULL;
    }
    return data;
}

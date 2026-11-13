extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define HT_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", line)

typedef struct ObjList_82B6E770 ObjList_82B6E770;

typedef struct SHashTable_82B6E770 {
    ObjList_82B6E770 **table;
    void *ctx;
    int pad8;
    void (*dealloc)(void *, void *);
    void *owner;
    unsigned int numBuckets;
} SHashTable_82B6E770;

extern unsigned int fn_82B9F880(const void *data, unsigned int size, unsigned int seed);
extern void fn_82AB54D0(ObjList_82B6E770 *pOList, unsigned int key, void *data);

void fn_82B6E770(SHashTable_82B6E770 *pSHashTable, const void *str, unsigned int size, void *data)
{
    ObjList_82B6E770 *pOList;
    unsigned int key;

    HT_ASSERT(pSHashTable, 0x242);
    key = fn_82B9F880(str, size, 0);
    pOList = pSHashTable->table[key % pSHashTable->numBuckets];
    HT_ASSERT(pOList, 0x24d);
    fn_82AB54D0(pOList, key, data);
}

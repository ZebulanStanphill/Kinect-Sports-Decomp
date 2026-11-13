extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void *fn_82AB5818(void *pOList, unsigned int key);
extern unsigned int fn_82B9F880(const void *data, unsigned int size, unsigned int seed);

#define HT_ASSERT(e, line) \
  if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", line)

typedef struct SHashTable_82B6E928 {
    void **buckets;
    void *ctx;
    int pad8;
    void (*dealloc)(void *, void *);
    void *owner;
    unsigned int n;
} SHashTable_82B6E928;

void *fn_82B6E928(SHashTable_82B6E928 *pSHashTable, const void *data, unsigned int size)
{
    unsigned int key;
    void *pOList;
    HT_ASSERT(pSHashTable, 0x2ea);
    key = fn_82B9F880(data, size, 0);
    pOList = pSHashTable->buckets[key % pSHashTable->n];
    HT_ASSERT(pOList, 0x2f5);
    return fn_82AB5818(pOList, key);
}

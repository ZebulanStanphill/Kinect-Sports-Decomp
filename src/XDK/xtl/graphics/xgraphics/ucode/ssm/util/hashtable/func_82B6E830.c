extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void *fn_82AB56B8(void *pOList, unsigned int key);
extern void *fn_82AB5768(void *pOList);
extern unsigned int fn_82B9F880(const void *data, unsigned int size, unsigned int seed);

#define SSM_NULL 0
#define HT_ASSERT(e, line) \
  if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", line)

typedef struct SHashTable_82B6E830 {
    void **buckets;
    void *ctx;
    int pad8;
    void (*dealloc)(void *, void *);
    void *owner;
    unsigned int n;
} SHashTable_82B6E830;

void *fn_82B6E830(SHashTable_82B6E830 *pSHashTable, const void *data, unsigned int size)
{
    unsigned int key;
    void *pOList;
    void *pMatch;
    HT_ASSERT(pSHashTable, 0x2ab);
    key = fn_82B9F880(data, size, 0);
    pOList = pSHashTable->buckets[key % pSHashTable->n];
    HT_ASSERT(pOList, 0x2b6);
    pMatch = fn_82AB56B8(pOList, key);
    if (pMatch != SSM_NULL) {
        void *secondMatch = fn_82AB5768(pOList);
        HT_ASSERT(secondMatch == SSM_NULL, 0x2bd);
        if (secondMatch != SSM_NULL) {
            pMatch = SSM_NULL;
        }
    }
    return pMatch;
}

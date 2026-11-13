extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern void fn_82AB5818(void *pOList, unsigned int key);

#define HT_ASSERT(e, line) \
  if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\hashtable.cpp", line)

typedef struct HashTable_82B6E520 {
    void **buckets;
    void *ctx;
    int pad8;
    void (*dealloc)(void *, void *);
    void *owner;
    unsigned int n;
} HashTable_82B6E520;

void fn_82B6E520(HashTable_82B6E520 *pHashTable, unsigned int key)
{
    void *pOList;
    HT_ASSERT(pHashTable, 0x137);
    pOList = pHashTable->buckets[key % pHashTable->n];
    HT_ASSERT(pOList, 0x13e);
    fn_82AB5818(pOList, key);
}

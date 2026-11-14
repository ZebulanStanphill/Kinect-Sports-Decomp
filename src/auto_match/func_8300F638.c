typedef struct Node_8300F638 Node_8300F638;
typedef struct NodeVt_8300F638 {
    void *slots[2];
    void (*release)(Node_8300F638 *self);
} NodeVt_8300F638;
struct Node_8300F638 {
    NodeVt_8300F638 *vt;
    int f4;
    Node_8300F638 *next;
    unsigned int flags;
};

typedef struct Hash_8300F638 {
    Node_8300F638 *buckets[0xc1];
} Hash_8300F638;

typedef struct Registry_8300F638 {
    unsigned char cs[0x1c];
    Hash_8300F638 hash;
} Registry_8300F638;

typedef struct Table_8300F638 {
    int f0;
    Registry_8300F638 reg;
} Table_8300F638;

typedef struct Iter_8300F638 {
    Hash_8300F638 *hash;
    unsigned int bucket;
    Node_8300F638 *node;
} Iter_8300F638;

extern Table_8300F638 *lbl_832642E0;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

static __forceinline void Skip(Iter_8300F638 *it)
{
    while (it->node == 0) {
        if (++it->bucket >= 0xc1) break;
        it->node = it->hash->buckets[it->bucket];
    }
}

void fn_8300F638(void)
{
    Registry_8300F638 *reg = &lbl_832642E0->reg;
    Iter_8300F638 it;
    Node_8300F638 *cur;

    RtlEnterCriticalSection(reg->cs);
    it.hash = &reg->hash;
    it.bucket = 0;
    it.node = reg->hash.buckets[0];
    Skip(&it);
    while (it.node != 0) {
        cur = it.node;
        it.node = cur->next;
        Skip(&it);
        if ((cur->flags & 0x80000000) != 0) {
            cur->vt->release(cur);
        }
    }
    RtlLeaveCriticalSection(reg->cs);
}

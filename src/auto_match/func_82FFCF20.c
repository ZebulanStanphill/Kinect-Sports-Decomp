typedef struct Node_82FFCF20 Node_82FFCF20;
typedef struct NodeVt_82FFCF20 {
    void *slot0;
    void (*addRef)(Node_82FFCF20 *self);
    void (*release)(Node_82FFCF20 *self);
} NodeVt_82FFCF20;
struct Node_82FFCF20 {
    NodeVt_82FFCF20 *vt;
    int f4;
    Node_82FFCF20 *next;
    int pad[4];
    void *owner;
};

typedef struct Hash_82FFCF20 {
    Node_82FFCF20 *buckets[0xc1];
} Hash_82FFCF20;

typedef struct Registry_82FFCF20 {
    unsigned char cs[0x1c];
    Hash_82FFCF20 hash;
} Registry_82FFCF20;

typedef struct Iter_82FFCF20 {
    Hash_82FFCF20 *hash;
    unsigned int bucket;
    Node_82FFCF20 *node;
} Iter_82FFCF20;

extern char *lbl_832642E0;
extern unsigned char lbl_8326434C[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FFCAC8(void *self, Node_82FFCF20 *node, int flag);

static __forceinline void Skip(Iter_82FFCF20 *it)
{
    while (it->node == 0) {
        if (++it->bucket >= 0xc1) break;
        it->node = it->hash->buckets[it->bucket];
    }
}

void fn_82FFCF20(void *self)
{
    Registry_82FFCF20 *reg = (Registry_82FFCF20 *)(lbl_832642E0 + 0x674);
    Iter_82FFCF20 it;
    Node_82FFCF20 *cur;

    RtlEnterCriticalSection(lbl_8326434C);
    RtlEnterCriticalSection(reg->cs);
    it.hash = &reg->hash;
    it.bucket = 0;
    it.node = reg->hash.buckets[0];
    Skip(&it);
    while (it.node != 0) {
        cur = it.node;
        if (cur->owner != 0) {
            cur->vt->addRef(cur);
            fn_82FFCAC8(self, cur, 1);
            it.node = cur->next;
            Skip(&it);
            cur->vt->release(cur);
        } else {
            it.node = cur->next;
            Skip(&it);
        }
    }
    RtlLeaveCriticalSection(reg->cs);
    RtlLeaveCriticalSection(lbl_8326434C);
}

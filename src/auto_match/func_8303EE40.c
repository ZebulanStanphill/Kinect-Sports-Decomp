typedef struct Obj_8303EE40 Obj_8303EE40;

typedef struct Desc_8303EE40 {
    int a;               /* 0x00 */
    int b;               /* 0x04 */
    int zero;            /* 0x08 */
    int value;           /* 0x0c */
    unsigned int index;  /* 0x10 */
    unsigned char flag0; /* 0x14 */
    unsigned char flag1; /* 0x15 */
    unsigned char mode;  /* 0x16 */
    char pad[9];
} Desc_8303EE40;

typedef struct {
    void *s0;
    void *s1;
    void (*Release)(Obj_8303EE40 *self); /* 0x08 */
    void *pad[4];
    int (*Submit)(Obj_8303EE40 *self, Desc_8303EE40 *desc); /* 0x1c */
} Vt_8303EE40;

struct Obj_8303EE40 {
    Vt_8303EE40 *vt;
};

typedef struct Ctx_8303EE40 {
    char pad0[0x14];
    unsigned int bits; /* 0x14 */
    char pad18[0x10];
    unsigned char mode; /* 0x28 */
} Ctx_8303EE40;

typedef struct Node_8303EE40 Node_8303EE40;

struct Node_8303EE40 {
    void *vt;
    int f4;
    Node_8303EE40 *next; /* 0x08 */
};

typedef struct Hash_8303EE40 {
    Node_8303EE40 *buckets[0xc1];
} Hash_8303EE40;

typedef struct Registry_8303EE40 {
    unsigned char cs[0x1c];
    Hash_8303EE40 hash; /* 0x1c */
} Registry_8303EE40;

typedef struct Table_8303EE40 {
    char pad0[0x1304];
    Registry_8303EE40 reg; /* 0x1304 */
} Table_8303EE40;

typedef struct Iter_8303EE40 {
    Hash_8303EE40 *hash;
    unsigned int bucket;
    Node_8303EE40 *node;
} Iter_8303EE40;

extern Table_8303EE40 *lbl_832642E0;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_83014E90(Node_8303EE40 *node, int a, int b);
extern Obj_8303EE40 *fn_83009E78(void);
extern int fn_8302BBA8(Ctx_8303EE40 *ctx);
extern Obj_8303EE40 *fn_83032738(void);

static __forceinline void Skip(Iter_8303EE40 *it)
{
    while (it->node == 0) {
        if (++it->bucket >= 0xc1)
            break;
        it->node = it->hash->buckets[it->bucket];
    }
}

void fn_8303EE40(Ctx_8303EE40 *ctx, int a, int b)
{
    Registry_8303EE40 *reg = &lbl_832642E0->reg;
    Iter_8303EE40 it;
    Obj_8303EE40 *target;
    Obj_8303EE40 *listener;

    RtlEnterCriticalSection(reg->cs);
    it.hash = &reg->hash;
    it.bucket = 0;
    it.node = reg->hash.buckets[0];
    Skip(&it);
    while (it.node != 0) {
        fn_83014E90(it.node, a, b);
        it.node = it.node->next;
        Skip(&it);
    }
    RtlLeaveCriticalSection(reg->cs);
    target = fn_83009E78();
    if (target != 0) {
        Desc_8303EE40 d;

        d.mode = ctx->mode;
        d.index = (ctx->bits >> 3) & 0x1f;
        d.flag0 = 0;
        d.a = a;
        d.b = b;
        d.zero = 0;
        d.value = fn_8302BBA8(ctx);
        d.flag1 = d.b == 0;
        target->vt->Submit(target, &d);
        listener = fn_83032738();
        if (listener != 0) {
            listener->vt->Submit(listener, &d);
            listener->vt->Release(listener);
        }
        target->vt->Release(target);
    }
}

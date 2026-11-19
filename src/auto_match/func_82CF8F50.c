typedef struct Node_82CF8F50 {
    struct Node_82CF8F50 *next;
} Node_82CF8F50;

typedef struct Bucket_82CF8F50 {
    Node_82CF8F50 *head; /* 0x00 */
    int size;            /* 0x04 */
    int pad08[6];        /* 0x08 */
    char *cursor;        /* 0x20 */
    char *end;           /* 0x24 */
    int count;           /* 0x28 */
} Bucket_82CF8F50;

typedef struct IfaceVtbl_82CF8F50 {
    void (*slot0)(struct Iface_82CF8F50 *);
    void *(*Alloc)(struct Iface_82CF8F50 *, int size);
} IfaceVtbl_82CF8F50;

typedef struct Iface_82CF8F50 {
    IfaceVtbl_82CF8F50 *vt;
} Iface_82CF8F50;

typedef struct Alloc_82CF8F50 {
    int pad00;                    /* 0x00 */
    char cs[0x1c];                /* 0x04 */
    int total;                    /* 0x20 */
    unsigned int peak;            /* 0x24 */
    int pad28;                    /* 0x28 */
    Iface_82CF8F50 iface;         /* 0x2c */
    int pad30[47];                /* 0x30 */
    int limit;                    /* 0xec */
    Bucket_82CF8F50 *buckets[35]; /* 0xf0 */
    char pad17C[0x780];           /* 0x17c */
    unsigned int softLimit;       /* 0x8fc */
} Alloc_82CF8F50;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *fn_82D01B18(Bucket_82CF8F50 *bucket);
extern void fn_82D02610(int reason);

void *fn_82CF8F50(Alloc_82CF8F50 *o, int *count, int elementSize)
{
    void *cs;
    Bucket_82CF8F50 *b;
    void *p;
    int size;
    int old;
    unsigned int used;

    cs = o->cs;
    size = *count * elementSize;
    RtlEnterCriticalSection(cs);
    if (size <= 0x220) {
        b = o->buckets[(size + 0xf) >> 4];
        old = b->count;
        if (b->head != 0) {
            p = b->head;
            b->count = old - 1;
            b->head = b->head->next;
        } else if (b->cursor >= b->end) {
            p = fn_82D01B18(b);
        } else {
            p = b->cursor;
            b->count = old - 1;
            b->cursor = b->cursor + b->size;
        }
        o->total += (b->count - old) * b->size;
        *count = b->size / elementSize;
    } else {
        p = o->iface.vt->Alloc(&o->iface, size);
    }
    used = o->limit - o->total;
    o->peak = used > o->peak ? used : o->peak;
    if (used >= o->softLimit) {
        fn_82D02610(1);
    }
    RtlLeaveCriticalSection(cs);
    return p;
}

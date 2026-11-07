typedef struct Node_82CF8BF0 {
    struct Node_82CF8BF0 *next;
} Node_82CF8BF0;

typedef struct Bucket_82CF8BF0 {
    Node_82CF8BF0 *head;    /* 0x00 */
    int size;               /* 0x04 */
    int pad08[8];           /* 0x08 */
    int count;              /* 0x28 */
} Bucket_82CF8BF0;

struct Iface_82CF8BF0;

typedef struct IfaceVtbl_82CF8BF0 {
    void (*slot0)(struct Iface_82CF8BF0 *);
    void (*slot1)(struct Iface_82CF8BF0 *);
    void (*Free)(struct Iface_82CF8BF0 *, void *);
} IfaceVtbl_82CF8BF0;

typedef struct Iface_82CF8BF0 {
    IfaceVtbl_82CF8BF0 *vt;
} Iface_82CF8BF0;

typedef struct Alloc_82CF8BF0 {
    int pad00;                          /* 0x00 */
    char cs[0x1c];                      /* 0x04 */
    int total;                          /* 0x20 */
    int pad24[2];                       /* 0x24 */
    Iface_82CF8BF0 iface;               /* 0x2c */
    int pad30[48];                      /* 0x30 */
    Bucket_82CF8BF0 *buckets[1];        /* 0xf0 */
} Alloc_82CF8BF0;

void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);

void fn_82CF8BF0(Alloc_82CF8BF0 *o, Node_82CF8BF0 **ptrs, int n, int size)
{
    void *cs;
    Bucket_82CF8BF0 *b;
    Node_82CF8BF0 *head;
    Node_82CF8BF0 *p;
    int old;
    int i;

    cs = o->cs;
    RtlEnterCriticalSection(cs);
    if (size <= 0x220) {
        b = o->buckets[(size + 0xf) >> 4];
        old = b->count;
        head = b->head;
        b->count = old + n;
        for (i = n - 1; i >= 0; i--) {
            p = *ptrs++;
            if (p != 0) {
                p->next = head;
                head = p;
            } else {
                b->count--;
            }
        }
        b->head = head;
        o->total += (b->count - old) * b->size;
        RtlLeaveCriticalSection(cs);
    } else {
        for (i = 0; i < n; i++) {
            if (ptrs[i] != 0) {
                o->iface.vt->Free(&o->iface, ptrs[i]);
            }
        }
        RtlLeaveCriticalSection(cs);
    }
}

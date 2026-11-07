typedef struct Node_82E81308 {
    unsigned int a;                     /* 0x0 */
    unsigned int b;                     /* 0x4 */
    int pad8;                           /* 0x8 */
    struct Node_82E81308 *next;         /* 0xc */
} Node_82E81308;

typedef struct Obj_82E81308 {
    int f0;                             /* 0x0 */
    unsigned int size;                  /* 0x4 */
    unsigned int f8;                    /* 0x8 */
    Node_82E81308 *head;                /* 0xc */
    Node_82E81308 *tail;                /* 0x10 */
    Node_82E81308 *f14;                 /* 0x14 */
} Obj_82E81308;

extern void *fn_82E50BE8(int a, int b, int c, int d, int e);
extern void fn_82E80A68(Obj_82E81308 *p);
extern Node_82E81308 *fn_82E80FD8(void *mem, unsigned int start, unsigned int len);

long fn_82E81308(Obj_82E81308 *p, unsigned __int64 size)
{
    long hr = 0;
    Node_82E81308 *last;
    unsigned int total;
    void *mem;
    Node_82E81308 *node;

    if (size > 0x10000) {
        hr = (long)0x80070057;
    } else {
        last = p->tail;
        total = last ? last->b + last->a : 0;
        if (last == 0 || (unsigned int)size > total) {
            mem = fn_82E50BE8(0x10, 0, 0, 0, 0);
            node = mem ? fn_82E80FD8(mem, total, (unsigned int)size - total) : 0;
            if (node == 0) {
                hr = (long)0x8007000E;
                goto done;
            }
            if (p->tail == 0) {
                p->head = node;
                p->f14 = node;
                p->f8 = 0;
            } else {
                p->tail->next = node;
            }
            p->tail = node;
        }
        p->size = (unsigned int)size;
        if (p->f8 > (unsigned int)size) {
            p->f8 = (unsigned int)size;
            fn_82E80A68(p);
        }
    }
done:
    return hr;
}

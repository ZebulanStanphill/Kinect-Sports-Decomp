typedef struct Elem_828B3E88 { struct { void (*f0)(struct Elem_828B3E88 *, int); } *vt; } Elem_828B3E88;
typedef struct Q_828B3E88 { int pad; Elem_828B3E88 **data; unsigned int cap; unsigned int head; unsigned int count; } Q_828B3E88;
extern void fn_8265CA20(void *);

void fn_828B3E88(Q_828B3E88 *q)
{
    unsigned int idx;
    unsigned int n;
    unsigned int i;
    int off;
    unsigned int ev;
    Elem_828B3E88 *e;
    while (q->count != 0) {
        if (q->count != 0) {
            idx = q->count + q->head - 1;
            if (q->cap <= idx) {
                idx = idx - q->cap;
            }
            e = q->data[idx];
            e->vt->f0(e, 0);
            n = q->count - 1;
            q->count = n;
            if (n == 0) {
                q->head = 0;
            }
        }
    }
    i = q->cap;
    if (i != 0) {
        off = i << 2;
        do {
            off -= 4;
            i--;
            if (*(unsigned int *)((char *)q->data + off) != 0) {
                fn_8265CA20(*(void **)((char *)q->data + off));
            }
        } while (i != 0);
    }
    if (q->data != 0) {
        fn_8265CA20(q->data);
    }
    q->cap = 0;
    q->data = 0;
}

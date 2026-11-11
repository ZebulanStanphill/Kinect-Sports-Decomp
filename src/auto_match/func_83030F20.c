typedef struct Node_83030F20 { struct Node_83030F20 *next; int d[4]; } Node_83030F20;
typedef struct {
    int f0, f4;
    Node_83030F20 *free;
    unsigned count;
    int f10;
    int f14;
    Node_83030F20 *mem;
    void *heap;
} Pool_83030F20;
extern void *fn_82FA5060(void *heap, unsigned size);

int fn_83030F20(Pool_83030F20 *p, unsigned count, int a, void *heap)
{
    int ret = 1;
    p->heap = heap;
    p->count = count;
    p->f14 = 0;
    p->f10 = a;
    if (count != 0) {
        Node_83030F20 *n = fn_82FA5060(heap, count * 5 * 4);
        p->mem = n;
        if (n != 0) {
            unsigned i = 0;
            Node_83030F20 *cur = n;
            p->free = n;
            while (i < p->count) {
                Node_83030F20 *nx = cur + 1;
                i++;
                cur->next = nx;
                cur = nx;
            }
            cur[-1].next = 0;
        } else {
            p->count = 0;
            ret = 0x34;
            p->f10 = 0;
            p->free = 0;
        }
    } else {
        p->mem = 0;
        p->free = 0;
    }
    p->f0 = 0;
    p->f4 = 0;
    return ret;
}

typedef struct Node_82FFDE60 { struct Node_82FFDE60 *next; int d[9]; } Node_82FFDE60;
typedef struct {
    int f0, f4;
    Node_82FFDE60 *free;
    unsigned count;
    int f10;
    int f14;
    Node_82FFDE60 *mem;
    void *heap;
} Pool_82FFDE60;
extern void *fn_82FA5060(void *heap, unsigned size);

int fn_82FFDE60(Pool_82FFDE60 *p, unsigned count, int a, void *heap)
{
    int ret = 1;
    p->heap = heap;
    p->count = count;
    p->f14 = 0;
    p->f10 = a;
    if (count != 0) {
        Node_82FFDE60 *n = fn_82FA5060(heap, count * 5 * 8);
        p->mem = n;
        if (n != 0) {
            unsigned i = 0;
            Node_82FFDE60 *cur = n;
            p->free = n;
            while (i < p->count) {
                Node_82FFDE60 *nx = cur + 1;
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

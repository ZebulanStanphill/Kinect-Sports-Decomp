// Fixed-size node pool: allocates count 20-byte nodes from a heap, constructs
// the object each node carries and links the nodes into a free list. Same shape
// as fn_82FEEDD8 (24-byte nodes, no constructor).
#include <new>

struct Sub_83031378 {
    Sub_83031378() : b(0), c(0), d(0) {}
    int b, c, d;
};

struct Item_83031378 {
    int a;
    Sub_83031378 s;
};

struct Node_83031378 {
    Node_83031378 *next;
    Item_83031378 item;
};

struct Pool_83031378 {
    int f0, f4;
    Node_83031378 *free;
    unsigned count;
    int f10;
    int f14;
    Node_83031378 *mem;
    void *heap;
};

extern "C" void *fn_82FA5060(void *heap, unsigned size);

extern "C" int fn_83031378(Pool_83031378 *p, unsigned count, int a, void *heap)
{
    int ret = 1;
    p->heap = heap;
    p->count = count;
    p->f14 = 0;
    p->f10 = a;
    if (count != 0) {
        p->mem = (Node_83031378 *)fn_82FA5060(heap, count * sizeof(Node_83031378));
        if (p->mem != 0) {
            unsigned i = 0;
            Node_83031378 *cur = p->mem;
            p->free = cur;
            while (i < p->count) {
                new (&cur->item) Item_83031378;
                i++;
                cur->next = cur + 1;
                cur++;
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

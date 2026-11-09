typedef struct Node_83030FE8 Node_83030FE8;
typedef struct Item_83030FE8 {
    int pad[0x18];
    int f60;
    int f64;
} Item_83030FE8;
struct Node_83030FE8 {
    Node_83030FE8 *next;
    int f4;
    Item_83030FE8 item;
};
typedef struct Pool_83030FE8 {
    int f0, f4;
    Node_83030FE8 *free;
    unsigned count;
    int f10;
    int f14;
    Node_83030FE8 *mem;
    void *heap;
} Pool_83030FE8;
extern void *fn_82FA5060(void *heap, unsigned size);

int fn_83030FE8(Pool_83030FE8 *p, unsigned count, int a, void *heap)
{
    int ret = 1;
    p->heap = heap;
    p->count = count;
    p->f14 = 0;
    p->f10 = a;
    if (count != 0) {
        Node_83030FE8 *n = fn_82FA5060(heap, count * sizeof(Node_83030FE8));
        p->mem = n;
        if (n != 0) {
            unsigned i = 0;
            Node_83030FE8 *cur = n;
            p->free = n;
            while (i < p->count) {
                Node_83030FE8 *nx;
                if ((int)cur != -8)
                    cur->item.f60 = 0;
                nx = cur + 1;
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

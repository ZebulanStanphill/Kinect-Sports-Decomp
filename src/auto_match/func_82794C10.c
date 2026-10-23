typedef struct {
    int f[8];
    int id;
    unsigned short flags;
} Item;

typedef struct {
    char pad[0x18];
    int nextId;
    void *heap;
} Pool;

extern void *fn_8267B890(void *heap, int size, int flags);

Item *fn_82794C10(Pool *pool)
{
    Item *p = (Item *)fn_8267B890(pool->heap, 0x28, 0);
    if (p != 0) {
        p->f[0] = 0;
        p->f[1] = 0;
        p->f[2] = 0;
        p->f[3] = 0;
        p->f[4] = 0;
        p->f[5] = 0;
        p->f[6] = 0;
        p->f[7] = 0;
        p->flags = 0;
        {
            int id = pool->nextId;
            pool->nextId = id + 1;
            p->id = id;
        }
        return p;
    }
    return 0;
}

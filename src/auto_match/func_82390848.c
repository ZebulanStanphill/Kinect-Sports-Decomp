typedef struct Deque {
    void *alloc;
    void **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
} Deque;

extern void fn_82359C18(void *p);
extern void fn_8265CA20(void *p);

static void Deque_pop_back(Deque *d)
{
    if (d->size != 0) {
        unsigned int block = d->size + d->off - 1;
        if (d->mapsize <= block)
            block -= d->mapsize;
        fn_82359C18(d->map[block]);
        if (--d->size == 0)
            d->off = 0;
    }
}

void fn_82390848(Deque *d)
{
    unsigned int count;

    while (d->size != 0)
        Deque_pop_back(d);
    for (count = d->mapsize; 0 < count;) {
        if (*(d->map + --count) != 0)
            fn_8265CA20(*(d->map + count));
    }
    if (d->map != 0)
        fn_8265CA20(d->map);
    d->mapsize = 0;
    d->map = 0;
    fn_8265CA20(d->alloc);
    d->alloc = 0;
}

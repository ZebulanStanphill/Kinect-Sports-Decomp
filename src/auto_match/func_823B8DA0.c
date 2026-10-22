typedef struct Elem {
    int a;
    int b;
    int c;
    void *ref;
} Elem;

typedef struct Deque {
    int pad0;
    Elem **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
} Deque;

extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);

static void Deque_pop_back(Deque *d)
{
    if (d->size != 0) {
        unsigned int newoff = d->off + d->size - 1;
        if (d->mapsize <= newoff)
            newoff -= d->mapsize;
        if (d->map[newoff]->ref != 0)
            fn_822315A0(d->map[newoff]->ref);
        if (--d->size == 0)
            d->off = 0;
    }
}

void fn_823B8DA0(Deque *d)
{
    unsigned int count;

    while (d->size != 0)
        Deque_pop_back(d);
    for (count = d->mapsize; count != 0;) {
        if (*(d->map + --count) != 0)
            fn_8265CA20(*(d->map + count));
    }
    if (d->map != 0)
        fn_8265CA20(d->map);
    d->mapsize = 0;
    d->map = 0;
}

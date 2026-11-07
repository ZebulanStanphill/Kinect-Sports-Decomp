typedef struct Deque_8287D120 {
    void *proxy;
    unsigned int **map;
    unsigned int mapsize;
    unsigned int myoff;
    unsigned int mysize;
} Deque_8287D120;

typedef struct Iter_8287D120 {
    Deque_8287D120 *cont;
    unsigned int off;
} Iter_8287D120;

static __forceinline unsigned int *deref_8287D120(Iter_8287D120 *it)
{
    unsigned int block = it->off / 4;
    unsigned int off = it->off % 4;
    if (it->cont->mapsize <= block) {
        block -= it->cont->mapsize;
    }
    return &it->cont->map[block][off];
}

static __forceinline void swap_8287D120(unsigned int *a, unsigned int *b)
{
    unsigned int t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void iter_swap_8287D120(Iter_8287D120 a, Iter_8287D120 b)
{
    swap_8287D120(deref_8287D120(&a), deref_8287D120(&b));
}

void fn_8287D120(Iter_8287D120 first, Iter_8287D120 last)
{
    for (; first.off != last.off && first.off != --last.off; ++first.off) {
        iter_swap_8287D120(first, last);
    }
}

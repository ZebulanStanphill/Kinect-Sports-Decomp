typedef struct Deque_828D4F38 {
    void *proxy;
    unsigned int **map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
} Deque_828D4F38;

typedef struct Iter_828D4F38 {
    Deque_828D4F38 *cont;
    unsigned int off;
} Iter_828D4F38;

extern void fn_828C4690(Iter_828D4F38 a, Iter_828D4F38 b);

static __forceinline unsigned int *Deref_828D4F38(Iter_828D4F38 it)
{
    unsigned int block = it.off / 4;
    unsigned int off = it.off % 4;
    if (it.cont->mapsize <= block)
        block -= it.cont->mapsize;
    return &it.cont->map[block][off];
}

void fn_828D4F38(Iter_828D4F38 first, Iter_828D4F38 mid, Iter_828D4F38 last)
{
    if (*Deref_828D4F38(mid) < *Deref_828D4F38(first))
        fn_828C4690(mid, first);
    if (*Deref_828D4F38(last) < *Deref_828D4F38(mid))
        fn_828C4690(last, mid);
    if (*Deref_828D4F38(mid) < *Deref_828D4F38(first))
        fn_828C4690(mid, first);
}

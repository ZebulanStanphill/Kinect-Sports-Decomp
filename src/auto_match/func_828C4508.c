
typedef struct Deque_828C4508 {
    void *proxy;
    unsigned **map;
    unsigned mapsize, off, size;
} Deque_828C4508;

typedef struct Iter_828C4508 {
    Deque_828C4508 *cont;
    unsigned off;
} Iter_828C4508;

static __forceinline unsigned *Deref(Iter_828C4508 *it)
{
    unsigned b = it->off / 4;
    unsigned o = it->off % 4;
    if (it->cont->mapsize <= b)
        b -= it->cont->mapsize;
    return &it->cont->map[b][o];
}

static __forceinline Iter_828C4508 *Dec(Iter_828C4508 *it)
{
    --it->off;
    return it;
}

static __forceinline void Assign(unsigned *dst, unsigned *src)
{
    *dst = *src;
}

Iter_828C4508 *fn_828C4508(Iter_828C4508 *out, Iter_828C4508 first, Iter_828C4508 last, Iter_828C4508 dest)
{
    for (; first.off != last.off;) {
        Assign(Deref(Dec(&dest)), Deref(Dec(&last)));
    }
    *out = dest;
    return out;
}

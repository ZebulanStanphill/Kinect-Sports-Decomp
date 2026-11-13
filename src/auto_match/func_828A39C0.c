typedef struct Proxy_828A39C0 {
    struct Deque_828A39C0 *cont;
    void *firstiter;
} Proxy_828A39C0;

typedef struct Deque_828A39C0 {
    Proxy_828A39C0 *proxy;
    void *map;
    unsigned int mapsize;
    unsigned int off;
    unsigned int size;
} Deque_828A39C0;

typedef struct It_828A39C0 {
    Proxy_828A39C0 *proxy;
    void *nextiter;
    unsigned int off;
} It_828A39C0;

typedef struct Obj_828A39C0 {
    char pad0[0x240];
    Deque_828A39C0 items;   /* 0x240 */
} Obj_828A39C0;

/* std::remove(first, last, value) */
extern It_828A39C0 *fn_828A2E00(It_828A39C0 *out, It_828A39C0 *first, It_828A39C0 *last, void **value);
/* deque::erase(where) */
extern It_828A39C0 *fn_828A34C0(It_828A39C0 *out, Deque_828A39C0 *self, It_828A39C0 *where);

static __forceinline void Adopt_828A39C0(It_828A39C0 *it, const Deque_828A39C0 *parent)
{
    if (parent != 0)
        it->proxy = parent->proxy;
}

static __forceinline void Copy_828A39C0(It_828A39C0 *it, const It_828A39C0 *right)
{
    it->proxy = 0;
    it->nextiter = 0;
    if (it->proxy != right->proxy)
        Adopt_828A39C0(it, right->proxy->cont);
    it->off = right->off;
}

/* it = std::remove(items.begin(), items.end(), value); if (it != items.end()) items.erase(it); */
void fn_828A39C0(Obj_828A39C0 *self, void *value)
{
    Deque_828A39C0 *d = &self->items;
    It_828A39C0 last, first, it;

    first.off = d->off;
    last.proxy = d->proxy;
    last.nextiter = 0;
    last.off = d->off + d->size;
    first.proxy = d->proxy;
    first.nextiter = 0;
    fn_828A2E00(&it, &first, &last, &value);
    if (it.off != d->off + d->size) {
        Copy_828A39C0(&last, &it);
        fn_828A34C0(&it, d, &last);
    }
}

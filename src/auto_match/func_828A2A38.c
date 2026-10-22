typedef struct Proxy Proxy;
typedef struct Cont {
    Proxy *proxy;
} Cont;
struct Proxy {
    Cont *cont;
};

typedef struct Iter {
    Proxy *proxy;
    struct Iter *next;
    unsigned int off;
} Iter;

extern unsigned int *fn_8287CBD0(Iter *it);

Iter *fn_828A2A38(Iter *ret, Iter *first, Iter *last, Iter *dest)
{
    Proxy *p;
    Cont *c;

    for (; first->off != last->off; ++dest->off, ++first->off) {
        *fn_8287CBD0(dest) = *fn_8287CBD0(first);
    }
    p = dest->proxy;
    ret->proxy = 0;
    ret->next = 0;
    if (p != 0 && (c = p->cont) != 0) {
        ret->proxy = c->proxy;
    }
    ret->off = dest->off;
    return ret;
}

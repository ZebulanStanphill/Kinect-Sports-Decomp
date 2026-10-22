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

extern unsigned short *fn_8288BDF8(Iter *it);

Iter *fn_8288C8C8(Iter *ret, Iter *first, Iter *last, Iter *dest)
{
    Proxy *p;
    Cont *c;

    for (; first->off != last->off; ++dest->off, ++first->off) {
        *fn_8288BDF8(dest) = *fn_8288BDF8(first);
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

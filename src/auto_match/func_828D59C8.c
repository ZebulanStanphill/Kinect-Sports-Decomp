typedef struct ContBase ContBase;
typedef struct Proxy {
    ContBase *cont;
    void *firstiter;
} Proxy;
struct ContBase {
    Proxy *proxy;
};

typedef struct {
    Proxy *proxy;
    void *next;
    unsigned int off;
} Iter;

typedef struct {
    int vtbl;
    int a;
    char name[42];
} Elem;

extern Elem *fn_828D4E10(Iter *it);

Iter *fn_828D59C8(Iter *ret, Iter *first, Iter *last, Iter *dest)
{
    while (first->off != last->off) {
        Elem *s;
        Elem *d;
        int i;
        last->off--;
        s = fn_828D4E10(last);
        dest->off--;
        d = fn_828D4E10(dest);
        d->a = s->a;
        for (i = 0; i < 42; i++)
            d->name[i] = s->name[i];
    }
    {
        Proxy *p = dest->proxy;
        ret->proxy = 0;
        ret->next = 0;
        if (p != 0) {
            ContBase *c = p->cont;
            if (c != 0)
                ret->proxy = c->proxy;
        }
    }
    ret->off = dest->off;
    return ret;
}

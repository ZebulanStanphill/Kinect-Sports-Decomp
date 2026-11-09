typedef struct Proxy Proxy;
typedef struct Cont { Proxy *proxy; } Cont;
struct Proxy { Cont *cont; };
typedef struct Iter { Proxy *proxy; void *next; void *ptr; } Iter;
typedef struct Pred { unsigned char dummy; } Pred;

extern void fn_828D59C8(void *ret, Iter *a, Iter *b, Iter *c, Pred pred);

static Cont *Iter_getcont(const Iter *it)
{
    return it->proxy == 0 ? 0 : it->proxy->cont;
}

static void Iter_adopt(Iter *it, const Cont *parent)
{
    if (parent != 0)
        it->proxy = parent->proxy;
}

static void Iter_copy(Iter *it, const Iter *src)
{
    it->proxy = 0;
    it->next = 0;
    Iter_adopt(it, Iter_getcont(src));
    it->ptr = src->ptr;
}

void *fn_828D6A20(void *ret, Iter *a, Iter *b, Iter *c)
{
    Pred pred;
    Pred p;
    Iter tc, tb, ta;

    p = pred;
    Iter_copy(&tc, c);
    Iter_copy(&tb, b);
    Iter_copy(&ta, a);
    fn_828D59C8(ret, &ta, &tb, &tc, p);
    return ret;
}

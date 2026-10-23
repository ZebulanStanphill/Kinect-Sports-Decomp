typedef struct Proxy Proxy;
typedef struct Cont { Proxy *proxy; } Cont;
struct Proxy { Cont *cont; };
typedef struct Iter { Proxy *proxy; void *next; void *ptr; int pad; } Iter;

extern void fn_823BA0F0(void *ret, Iter *a, Iter *b, Iter *c);

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

void *fn_823B9968(void *ret, Iter *a, Iter *b, Iter *c)
{
    Iter tc, tb, ta;

    Iter_copy(&tc, c);
    Iter_copy(&tb, b);
    Iter_copy(&ta, a);
    fn_823BA0F0(ret, &ta, &tb, &tc);
    return ret;
}

typedef struct Iter {
    void *ptr;
    int idx;
} Iter;

typedef struct Container {
    void *base;
    int pad[3];
    unsigned int size;
} Container;

extern void fn_8288B918(Iter *it, unsigned int n);
extern Iter *fn_8288BE40(Iter *out, Iter *it, unsigned int n);
extern void fn_8288FCA8(Iter *out, Container *c, Iter first, Iter last);
extern void fn_82891250(Container *c, Iter where, unsigned int n, const void *val);

void fn_828921E8(Container *c, unsigned int n, const void *val)
{
    unsigned int size = c->size;
    Iter end;
    Iter first;
    Iter tmp;
    void *base;

    if (n > size) {
        end.ptr = c->base;
        end.idx = 0;
        if (size != 0) {
            fn_8288B918(&end, size);
        }
        fn_82891250(c, end, n - size, val);
    } else if (n < size) {
        base = c->base;
        end.ptr = base;
        end.idx = 0;
        if (size != 0) {
            fn_8288B918(&end, size);
        }
        first.ptr = base;
        first.idx = 0;
        fn_8288FCA8(&first, c, *fn_8288BE40(&tmp, &first, n), end);
    }
}

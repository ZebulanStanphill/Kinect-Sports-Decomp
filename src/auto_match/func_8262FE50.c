extern long _InterlockedIncrement(long *);

typedef struct Obj_8262FEC8 {
    unsigned int flags;
    long refs;
    char pad[0x10];
    struct Obj_8262FEC8 *child;
} Obj_8262FEC8;

unsigned fn_8262FE50(Obj_8262FEC8 *p)
{
    unsigned n = _InterlockedIncrement(&p->refs);
    if (n == 1) {
        if ((p->flags & 0xf) == 4 && (p->flags & 0x40000000) != 0) {
            fn_8262FE50(p->child);
        }
    }
    return n;
}

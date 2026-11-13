extern long _InterlockedDecrement(long *);
extern void fn_8262F6B8(void *);

typedef struct Obj_8262FEC8 {
    unsigned int flags;
    long refs;
    char pad[0x10];
    struct Obj_8262FEC8 *child;
} Obj_8262FEC8;

unsigned fn_8262FEC8(Obj_8262FEC8 *p)
{
    unsigned n = _InterlockedDecrement(&p->refs);
    if (n == 0) {
        if ((p->flags & 0xf) == 4 && (p->flags & 0x40000000) != 0) {
            fn_8262FEC8(p->child);
        }
        fn_8262F6B8(p);
        n = 0;
    }
    return n;
}

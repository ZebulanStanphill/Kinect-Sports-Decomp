extern long _InterlockedDecrement(long *);
extern void fn_82E7A5B0(void *);
extern void fn_82E4FE40(void *);
typedef struct { char pad[4]; long refs; } Obj_82E7B090;
unsigned fn_82E7B090(Obj_82E7B090 *p)
{
    unsigned n = _InterlockedDecrement(&p->refs);
    if (n == 0) {
        p->refs = 0x7fffffff;
        fn_82E7A5B0(p);
        fn_82E4FE40(p);
    }
    return n;
}

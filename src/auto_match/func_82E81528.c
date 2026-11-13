extern long _InterlockedDecrement(long *);
extern void fn_82E81408(void *);
extern void fn_82E4FE40(void *);
typedef struct { char pad[0x18]; long refs; } Obj_82E81528;
unsigned fn_82E81528(Obj_82E81528 *p)
{
    unsigned n = _InterlockedDecrement(&p->refs);
    if (n == 0 && p != 0) {
        fn_82E81408(p);
        fn_82E4FE40(p);
    }
    return n;
}

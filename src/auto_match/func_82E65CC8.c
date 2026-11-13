extern long _InterlockedDecrement(long *);
extern void fn_82E657E8(void *);
extern void fn_82E4FE40(void *);
typedef struct { char pad[4]; long refs; } Obj_82E65CC8;
long fn_82E65CC8(Obj_82E65CC8 *p)
{
    long n = _InterlockedDecrement(&p->refs);
    if (n == 0 && p != 0) {
        fn_82E657E8(p);
        fn_82E4FE40(p);
    }
    return n;
}

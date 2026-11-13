extern long _InterlockedDecrement(long *);
extern void fn_82EE8630(void *);
extern void fn_82E4FE40(void *);
typedef struct { char pad[16]; long refs; } Obj_82EE8CA8;
long fn_82EE8CA8(Obj_82EE8CA8 *p)
{
    long n = _InterlockedDecrement(&p->refs);
    if (n == 0 && p != 0) {
        fn_82EE8630(p);
        fn_82E4FE40(p);
    }
    return n;
}

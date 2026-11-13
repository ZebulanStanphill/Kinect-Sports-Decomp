extern long _InterlockedDecrement(long *);
extern void fn_82E58F30(void *);
extern void fn_82E4FE40(void *);
typedef struct { char pad[4]; long refs; } Obj_82E590E0;
unsigned fn_82E590E0(Obj_82E590E0 *p)
{
    unsigned n = _InterlockedDecrement(&p->refs);
    if (n == 0 && p != 0) {
        fn_82E58F30(p);
        fn_82E4FE40(p);
    }
    return n;
}

extern long _InterlockedDecrement(long *);
extern void fn_82EE6FA8(void *);
extern void fn_82E4FE40(void *);
typedef struct { char pad[4]; long refs; } Obj_82EE7E90;
unsigned fn_82EE7E90(Obj_82EE7E90 *p)
{
    unsigned n=_InterlockedDecrement(&p->refs);
    if(n==0) {
        if(p!=0) { fn_82EE6FA8(p); fn_82E4FE40(p); }
        n=0;
    }
    return n;
}

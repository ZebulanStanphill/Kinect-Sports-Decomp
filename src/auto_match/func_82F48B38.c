extern long _InterlockedDecrement(long *);
extern void fn_82F48A30(void *);
extern void fn_82E4FE40(void *);
typedef struct { char pad[8]; long refs; } Obj_82F48B38;
unsigned fn_82F48B38(Obj_82F48B38 *p)
{
    unsigned n=_InterlockedDecrement(&p->refs);
    if(n==0) {
        if(p!=0) { fn_82F48A30(p); fn_82E4FE40(p); }
        n=0;
    }
    return n;
}

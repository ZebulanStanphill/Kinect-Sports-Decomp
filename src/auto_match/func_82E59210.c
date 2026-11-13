extern long _InterlockedDecrement(long *);
extern void fn_82E58D20(void *);
extern void fn_82E4FE40(void *);
typedef struct Obj_82E59210 Obj_82E59210;
typedef struct Vtbl_82E59210 {
    void (*f0)(Obj_82E59210 *self);
    void (*f4)(Obj_82E59210 *self);
} Vtbl_82E59210;
struct Obj_82E59210 {
    Vtbl_82E59210 *vt;
    long refs;
};
unsigned long fn_82E59210(Obj_82E59210 *p)
{
    unsigned long n = _InterlockedDecrement(&p->refs);
    if (n == 0) {
        p->vt->f4(p);
        fn_82E58D20(p);
        fn_82E4FE40(p);
    }
    return n;
}

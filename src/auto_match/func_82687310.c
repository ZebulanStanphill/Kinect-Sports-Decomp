typedef struct { int refs; } Rc_82687310;
typedef struct { int a; int b; } Z_82687310;
typedef struct {
    void *vt;
    int f4;
    Rc_82687310 *f8;
    int fc;
    int f10;
    Z_82687310 z;
    int f1c;
    int f20;
} Obj_82687310;
extern void fn_8267C4C8(Rc_82687310 *);
extern void fn_8267C4F0(Rc_82687310 *);
extern void fn_8267EEE0(void *, int, int);
extern void fn_826862E0(void *, int);
extern void fn_8268B330(void *);
extern char lbl_82005B58[];

Obj_82687310 *fn_82687310(Obj_82687310 *p, Rc_82687310 *rc, int a)
{
    Z_82687310 *z;
    Rc_82687310 **pf8;
    p->f4 = 1;
    p->vt = lbl_82005B58;
    z = &p->z;
    pf8 = &p->f8;
    *pf8 = 0;
    z->a = 0;
    z->b = 0;
    fn_8268B330(&p->f1c);
    fn_8267EEE0(&p->f20, 0, 0);
    if (rc != 0)
        fn_8267C4C8(rc);
    if (p->f8 != 0)
        fn_8267C4F0(p->f8);
    p->f8 = rc;
    p->fc = 0;
    p->f10 = 0;
    fn_826862E0(z, a);
    return p;
}

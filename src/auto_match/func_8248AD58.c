typedef struct { int pad[2]; int cnt; } Rc_8248AD58;
typedef struct { void *vt; int pad4[2]; void *buf; int pad10; Rc_8248AD58 *rc; } Obj_8248AD58;
extern void fn_8265CA20(void *);
extern char lbl_821BEA18[];

Obj_8248AD58 *fn_8248AD58(Obj_8248AD58 *p, unsigned flags)
{
    Rc_8248AD58 *rc = p->rc;
    p->vt = lbl_821BEA18;
    rc->cnt--;
    if (p->buf != 0)
        fn_8265CA20(p->buf);
    if (flags & 1)
        fn_8265CA20(p);
    return p;
}

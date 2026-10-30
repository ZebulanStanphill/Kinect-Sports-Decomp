typedef struct { int a, b, c, d; } Sub_83054C20;
typedef struct {
    void *vt0;
    char pad0[0x74];
    void *vt1;
    char pad1[0x24];
    Sub_83054C20 s;
} Obj_83054C20;
extern void fn_83050C48(Obj_83054C20 *);
extern void fn_8265CA20(void *);
extern char lbl_8217DF44[];
extern char lbl_8217DF74[];

static void Sub_clear(Sub_83054C20 *s)
{
    s->a = 0;
    s->b = 0;
    s->c = 0;
    s->d = 0;
}

Obj_83054C20 *fn_83054C20(Obj_83054C20 *p, unsigned int flags)
{
    p->vt0 = lbl_8217DF74;
    p->vt1 = lbl_8217DF44;
    Sub_clear(&p->s);
    fn_83050C48(p);
    if ((flags & 1) != 0) {
        fn_8265CA20(p);
    }
    return p;
}

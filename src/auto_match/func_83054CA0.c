typedef struct { int a, b, c, d; } Sub_83054CA0;
typedef struct {
    void *vt0;
    char pad0[0x74];
    void *vt1;
    char pad1[0x34];
    Sub_83054CA0 s;
} Obj_83054CA0;
extern void fn_83051070(Obj_83054CA0 *);
extern void fn_8265CA20(void *);
extern char lbl_8217DFA0[];
extern char lbl_8217DFD4[];

static void Sub_clear(Sub_83054CA0 *s)
{
    s->a = 0;
    s->b = 0;
    s->c = 0;
    s->d = 0;
}

Obj_83054CA0 *fn_83054CA0(Obj_83054CA0 *p, unsigned int flags)
{
    p->vt0 = lbl_8217DFD4;
    p->vt1 = lbl_8217DFA0;
    Sub_clear(&p->s);
    fn_83051070(p);
    if ((flags & 1) != 0) {
        fn_8265CA20(p);
    }
    return p;
}

typedef struct { char buf[16]; unsigned int size; unsigned int res; } Str_828D2040;
typedef struct {
    void *vt0;
    char pad0[0x4c];
    void *vt1;
    char pad1[0x2c];
    unsigned int a;
    char pad2[0x28];
    unsigned int b;
    char pad3[8];
    Str_828D2040 s;
} Obj_828D2040;
extern int fn_828BDDA0();
extern char lbl_82025A10[];
extern char lbl_82025A18[];

static void Str_init(Str_828D2040 *s)
{
    s->size = 0;
    s->res = 0xf;
    s->buf[0] = 0;
}

Obj_828D2040 *fn_828D2040(Obj_828D2040 *p, unsigned int a, unsigned int b)
{
    fn_828BDDA0();
    p->a = a;
    p->b = b;
    p->vt0 = lbl_82025A18;
    p->vt1 = lbl_82025A10;
    Str_init(&p->s);
    return p;
}

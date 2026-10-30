typedef struct { char buf[16]; unsigned int size; unsigned int res; } Str_828A2AE8;
typedef struct {
    void *vt0;
    char pad0[0x4c];
    void *vt1;
    char pad1[0x54];
    Str_828A2AE8 s;
} Obj_828A2AE8;
extern int fn_828BDDA0();
extern char lbl_82024190[];
extern char lbl_82024198[];

static void Str_init(Str_828A2AE8 *s)
{
    s->size = 0;
    s->res = 0xf;
    s->buf[0] = 0;
}

Obj_828A2AE8 *fn_828A2AE8(Obj_828A2AE8 *p)
{
    fn_828BDDA0();
    p->vt0 = lbl_82024198;
    p->vt1 = lbl_82024190;
    Str_init(&p->s);
    return p;
}

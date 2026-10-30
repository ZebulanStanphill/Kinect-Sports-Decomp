extern int fn_828BDDA0(void *);
extern unsigned int lbl_82025A10;
extern unsigned int lbl_82025A18;

typedef struct { char buf[16]; unsigned int size; unsigned int res; } Str;
typedef struct {
    void *vt;
    char pad4[0x50 - 4];
    void *vt50;
    char pad54[0x80 - 0x54];
    int f80;
    char pad84[0xb8 - 0x84];
    Str s;
} Obj;
static void Str_init(Str *s) { s->size = 0; s->res = 0xf; s->buf[0] = 0; }
Obj *fn_828D20A0(Obj *o, int a)
{
    fn_828BDDA0(o);
    o->f80 = a;
    o->vt = &lbl_82025A18;
    o->vt50 = &lbl_82025A10;
    Str_init(&o->s);
    return o;
}

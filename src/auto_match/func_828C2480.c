typedef struct Str_828C2480 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} Str_828C2480;

typedef struct Obj_828C2480 {
    void *vt;
    int a;
    int b;
    Str_828C2480 s;
} Obj_828C2480;

extern void *fn_82230218(Str_828C2480 *dst, const Str_828C2480 *src,
                         unsigned int pos, unsigned int n);
extern unsigned int lbl_82025418;

static __forceinline void Str_tidy_828C2480(Str_828C2480 *s)
{
    s->res = 15;
    s->size = 0;
    s->bx.buf[0] = 0;
}

Obj_828C2480 *fn_828C2480(Obj_828C2480 *self, int p2, const Str_828C2480 *str, int p4)
{
    self->a = p4;
    self->b = p2;
    self->vt = &lbl_82025418;
    Str_tidy_828C2480(&self->s);
    fn_82230218(&self->s, str, 0, (unsigned int)-1);
    return self;
}

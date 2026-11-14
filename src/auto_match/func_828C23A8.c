typedef struct String_828C23A8 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_828C23A8;

typedef struct Obj_828C23A8 {
    void *vt;
    int value;
    String_828C23A8 str;
} Obj_828C23A8;

extern String_828C23A8 *fn_82230218(String_828C23A8 *self, const String_828C23A8 *src,
                                    unsigned int pos, unsigned int count);
extern unsigned int lbl_82026054;

static __forceinline String_828C23A8 *String_ctor_828C23A8(String_828C23A8 *s,
                                                         const String_828C23A8 *src)
{
    s->res = 15;
    s->size = 0;
    s->bx.buf[0] = 0;
    fn_82230218(s, src, 0, (unsigned int)-1);
    return s;
}

Obj_828C23A8 *fn_828C23A8(Obj_828C23A8 *self, int value, const String_828C23A8 *src)
{
    self->value = value;
    self->vt = &lbl_82026054;
    String_ctor_828C23A8(&self->str, src);
    return self;
}

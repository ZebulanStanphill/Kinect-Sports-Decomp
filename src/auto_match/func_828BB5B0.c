typedef struct Str_828BB5B0 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} Str_828BB5B0;

typedef struct Obj_828BB5B0 {
    void *vtable;
    int a;
    int b;
    Str_828BB5B0 str;
} Obj_828BB5B0;

extern Str_828BB5B0 *fn_82230218(Str_828BB5B0 *self, const Str_828BB5B0 *src,
                                 unsigned int pos, unsigned int count);
extern char lbl_82025418[];

static __forceinline void Str_Tidy_828BB5B0(Str_828BB5B0 *s)
{
    s->res = 15;
    s->size = 0;
    s->bx.buf[0] = 0;
}

Obj_828BB5B0 *fn_828BB5B0(Obj_828BB5B0 *self, int b, int a, const Str_828BB5B0 *src)
{
    self->a = a;
    self->b = b;
    self->vtable = lbl_82025418;
    Str_Tidy_828BB5B0(&self->str);
    fn_82230218(&self->str, src, 0, 0xffffffffu);
    return self;
}

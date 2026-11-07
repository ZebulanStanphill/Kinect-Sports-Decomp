typedef struct Elem_822D95C8 {
    int key;
    void *obj;
} Elem_822D95C8;

typedef struct Vec_822D95C8 {
    Elem_822D95C8 *first;
    Elem_822D95C8 *last;
    Elem_822D95C8 *end;
} Vec_822D95C8;

typedef struct Obj_822D95C8 {
    char pad0[0x60];
    char sub60[0x74];
    void *pd4;
    char padd8[0x140 - 0xd8];
    Vec_822D95C8 vec;
    char pad14c[0x154 - 0x14c];
    void *p154;
} Obj_822D95C8;

extern void fn_822315A0(void *p);
extern void fn_822C71C8(void *self);
extern void fn_822D9678(void *p);
extern void fn_8265CA20(void *p);

static __forceinline void Destroy_822D95C8(Elem_822D95C8 *f, Elem_822D95C8 *l)
{
    for (; f != l; ++f) {
        if (f->obj != 0) {
            fn_822315A0(f->obj);
        }
    }
}

static __forceinline void Tidy_822D95C8(Vec_822D95C8 *v)
{
    if (v->first != 0) {
        Destroy_822D95C8(v->first, v->last);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

void *fn_822D95C8(Obj_822D95C8 *self, unsigned int flags)
{
    if (self->p154 != 0) {
        fn_822315A0(self->p154);
    }
    Tidy_822D95C8(&self->vec);
    if (self->pd4 != 0) {
        fn_822315A0(self->pd4);
    }
    fn_822D9678(self->sub60);
    fn_822C71C8(self);
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}

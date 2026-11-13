typedef struct Impl_824C5930 { void *(**vt)(struct Impl_824C5930 *, void *); } Impl_824C5930;
typedef struct { int pad[4]; Impl_824C5930 *impl; } Fn_824C5930;
typedef struct {
    void *vt;
    int id;
    Fn_824C5930 fn;
    int pad1c;
    float f20;
    float f24;
    float f28;
} Obj_824C5930;

extern void *lbl_821C09C4[];

static __forceinline void Fn_Copy_824C5930(Fn_824C5930 *self, Fn_824C5930 *other)
{
    if (other->impl == 0) {
        self->impl = 0;
    } else {
        if (other->impl == (Impl_824C5930 *)other)
            self->impl = (Impl_824C5930 *)(*other->impl->vt)(other->impl, self);
        else
            self->impl = (Impl_824C5930 *)(*other->impl->vt)(other->impl, 0);
    }
}

Obj_824C5930 *fn_824C5930(Obj_824C5930 *self, int id, Fn_824C5930 *fn, float a, float b)
{
    self->id = id;
    self->vt = lbl_821C09C4;
    Fn_Copy_824C5930(&self->fn, fn);
    self->f24 = a;
    self->f28 = b;
    self->f20 = 0.0f;
    return self;
}

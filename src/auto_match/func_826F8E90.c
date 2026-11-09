typedef struct {
    int refCount;
} Ref_826F8E90;

typedef struct {
    Ref_826F8E90 *a;
    Ref_826F8E90 *b;
    Ref_826F8E90 *c;
} Obj_826F8E90;

extern void fn_8267BE38(Ref_826F8E90 *r);

static __forceinline void release_826F8E90(Ref_826F8E90 *r)
{
    if (r != 0 && --r->refCount == 0) {
        fn_8267BE38(r);
    }
}

void fn_826F8E90(Obj_826F8E90 *self)
{
    release_826F8E90(self->c);
    release_826F8E90(self->b);
    release_826F8E90(self->a);
}

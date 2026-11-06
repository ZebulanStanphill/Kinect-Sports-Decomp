typedef struct {
    int f0;
    int f4;
    int refCount;
} Ref_8269A608;
typedef struct {
    int f0;
    int f4;
    Ref_8269A608 *c;
    Ref_8269A608 *b;
    Ref_8269A608 *a;
} Obj_8269A608;
extern void fn_826944C8(Ref_8269A608 *r);

static __forceinline void release_8269A608(Ref_8269A608 *r)
{
    if (--r->refCount == 0) {
        fn_826944C8(r);
    }
}

void fn_8269A608(Obj_8269A608 *self)
{
    release_8269A608(self->a);
    release_8269A608(self->b);
    release_8269A608(self->c);
}

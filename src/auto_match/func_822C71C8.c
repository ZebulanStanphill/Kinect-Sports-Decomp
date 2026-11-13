long _InterlockedDecrement(long volatile *);

typedef struct Elem_822C71C8 {
    int key;
    void *obj;
} Elem_822C71C8;

typedef struct Vec_822C71C8 {
    Elem_822C71C8 *first;
    Elem_822C71C8 *last;
    Elem_822C71C8 *end;
} Vec_822C71C8;

typedef struct Shared_822C71C8 Shared_822C71C8;
typedef struct SharedVt_822C71C8 {
    void (*destroy)(Shared_822C71C8 *);
    void (*deleteThis)(Shared_822C71C8 *);
} SharedVt_822C71C8;
struct Shared_822C71C8 {
    SharedVt_822C71C8 *vt;
    long uses;
    long weaks;
};

typedef struct Obj_822C71C8 {
    void *vt;
    char base4[0x28];
    Shared_822C71C8 *rep;
    Vec_822C71C8 vec;
    int f3c;
    char sub40[4];
} Obj_822C71C8;

extern char lbl_821ACFB8[];
extern void fn_82558B08(Obj_822C71C8 *self);
extern void fn_822C7718(void *p);
extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);
extern void fn_82230300(void *p, int a, int b);

static __forceinline void Destroy_822C71C8(Elem_822C71C8 *f, Elem_822C71C8 *l)
{
    for (; f != l; ++f) {
        if (f->obj != 0) {
            fn_822315A0(f->obj);
        }
    }
}

static __forceinline void Tidy_822C71C8(Vec_822C71C8 *v)
{
    if (v->first != 0) {
        Destroy_822C71C8(v->first, v->last);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

static __forceinline void Decwref_822C71C8(Shared_822C71C8 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release_822C71C8(Shared_822C71C8 **p)
{
    if (*p != 0)
        Decwref_822C71C8(*p);
}

void fn_822C71C8(Obj_822C71C8 *self)
{
    self->vt = lbl_821ACFB8;
    fn_82558B08(self);
    fn_822C7718(self->sub40);
    Tidy_822C71C8(&self->vec);
    Release_822C71C8(&self->rep);
    fn_82230300(self->base4, 1, 0);
}

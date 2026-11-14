long _InterlockedDecrement(long volatile *);

typedef struct Rep_822D9678 Rep_822D9678;
typedef struct RepVt_822D9678 {
    void (*destroy)(Rep_822D9678 *);
    void (*deleteThis)(Rep_822D9678 *);
} RepVt_822D9678;
struct Rep_822D9678 {
    RepVt_822D9678 *vt;
    long uses;
    long weaks;
};

typedef struct Inner_822D9678 {
    char data[0x20];
} Inner_822D9678;

typedef struct InnerVec_822D9678 {
    Inner_822D9678 *first;
    Inner_822D9678 *last;
    Inner_822D9678 *end;
} InnerVec_822D9678;

typedef struct Elem_822D9678 {
    char pad0[0x10];
    InnerVec_822D9678 items;    /* 0x10 */
    int pad1c;
} Elem_822D9678;

typedef struct Vec_822D9678 {
    Elem_822D9678 *first;
    Elem_822D9678 *last;
    Elem_822D9678 *end;
} Vec_822D9678;

typedef struct Obj_822D9678 {
    Vec_822D9678 elems;         /* 0x00 */
    char pad0c[0x18 - 0x0c];
    void *ptr;                  /* 0x18 */
    Rep_822D9678 *rep;          /* 0x1c */
} Obj_822D9678;

extern void fn_8265CA20(void *p);

static __forceinline void DestroyInner(Inner_822D9678 *first, Inner_822D9678 *last)
{
    for (; first != last; ++first)
        ;
}

static __forceinline void TidyInner(InnerVec_822D9678 *v)
{
    if (v->first != 0) {
        DestroyInner(v->first, v->last);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

static __forceinline void DestroyElems(Elem_822D9678 *first, Elem_822D9678 *last)
{
    for (; first != last; ++first)
        TidyInner(&first->items);
}

static __forceinline void Decwref(Rep_822D9678 *r)
{
    if (_InterlockedDecrement(&r->weaks) == 0)
        r->vt->deleteThis(r);
}

static __forceinline void Release(Rep_822D9678 **p)
{
    if (*p != 0)
        Decwref(*p);
}

void fn_822D9678(Obj_822D9678 *self)
{
    Release(&self->rep);
    if (self->elems.first != 0) {
        DestroyElems(self->elems.first, self->elems.last);
        fn_8265CA20(self->elems.first);
    }
    self->elems.first = 0;
    self->elems.last = 0;
    self->elems.end = 0;
}

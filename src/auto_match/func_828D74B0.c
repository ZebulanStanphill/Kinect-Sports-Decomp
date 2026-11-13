typedef struct Elem_828D74B0 Elem_828D74B0;

typedef struct Vec_828D74B0 {
    Elem_828D74B0 *first;
    Elem_828D74B0 *last;
    Elem_828D74B0 *end;
    char alloc[4];
} Vec_828D74B0;

typedef struct String_828D74B0 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_828D74B0;

typedef struct Obj_828D74B0 {
    void *vt;
    int pad4[2];
    Vec_828D74B0 items;     /* 0x0c */
    String_828D74B0 name;   /* 0x1c */
} Obj_828D74B0;

extern void fn_828D53C0(Elem_828D74B0 *first, Elem_828D74B0 *last, void *al, char tag);
extern void fn_8265CA20(void *p);
extern char lbl_82026D6C[];

static __forceinline void String_Tidy(String_828D74B0 *s)
{
    if (s->res >= 16) {
        fn_8265CA20(s->bx.ptr);
    }
    s->size = 0;
    s->res = 15;
    s->bx.buf[0] = 0;
}

static __forceinline void Vec_Tidy(Vec_828D74B0 *v)
{
    char tag;
    if (v->first != 0) {
        fn_828D53C0(v->first, v->last, v->alloc, tag);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

void fn_828D74B0(Obj_828D74B0 *self)
{
    self->vt = lbl_82026D6C;
    String_Tidy(&self->name);
    Vec_Tidy(&self->items);
}

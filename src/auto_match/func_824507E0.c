/* Destroys three vectors (8-, 0x18- and plain-element) of the object, then frees it. */
extern void fn_8265CA20(void *p);

typedef struct { int w[2]; } Elem8_824507E0;
typedef struct { int w[6]; } Elem18_824507E0;

typedef struct { Elem8_824507E0 *first, *last, *end; } Vec8_824507E0;
typedef struct { Elem18_824507E0 *first, *last, *end; } Vec18_824507E0;
typedef struct { int *first, *last, *end; } VecP_824507E0;

typedef struct Obj_824507E0 {
    char pad0[0x3c];
    VecP_824507E0 c;
    char pad48[0xb8 - 0x48];
    Vec18_824507E0 b;
    int padc4;
    Vec8_824507E0 a;
} Obj_824507E0;

static __forceinline void Tidy8_824507E0(Vec8_824507E0 *v)
{
    if (v->first != 0) {
        Elem8_824507E0 *p;
        for (p = v->first; p != v->last; ++p) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

static __forceinline void Tidy18_824507E0(Vec18_824507E0 *v)
{
    if (v->first != 0) {
        Elem18_824507E0 *p;
        for (p = v->first; p != v->last; ++p) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

Obj_824507E0 *fn_824507E0(Obj_824507E0 *self)
{
    Tidy8_824507E0(&self->a);
    Tidy18_824507E0(&self->b);
    if (self->c.first != 0) {
        fn_8265CA20(self->c.first);
    }
    self->c.first = 0;
    self->c.last = 0;
    self->c.end = 0;
    fn_8265CA20(self);
    return self;
}

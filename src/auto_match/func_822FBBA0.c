typedef struct Elem_822FBBA0 { int a, b; } Elem_822FBBA0;
typedef struct Vec_822FBBA0 { Elem_822FBBA0 *first; Elem_822FBBA0 *last; Elem_822FBBA0 *end; } Vec_822FBBA0;
typedef struct Obj_822FBBA0 {
    char pad0[0x54];
    Vec_822FBBA0 v;
    char pad60[0x70 - 0x60];
    char s70[0x1c];
    char pad8C[0xa0 - 0x8c];
    char sA0[0x1c];
    char sBC[0x1c];
} Obj_822FBBA0;
extern void fn_82230300(void *s, int built, int newsize);
extern void fn_822C71C8(Obj_822FBBA0 *self);
extern void fn_8265CA20(void *p);

Obj_822FBBA0 *fn_822FBBA0(Obj_822FBBA0 *self, unsigned int flags)
{
    Vec_822FBBA0 *v;
    Elem_822FBBA0 *e;

    fn_82230300(self->sBC, 1, 0);
    fn_82230300(self->sA0, 1, 0);
    fn_82230300(self->s70, 1, 0);
    v = &self->v;
    if (v->first != 0) {
        for (e = v->first; e != v->last; e++) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
    fn_822C71C8(self);
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}

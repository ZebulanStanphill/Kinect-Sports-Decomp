extern char lbl_8202740C[];
typedef struct { int a; int b; } Pair_828E5F40;
typedef struct { void *vtbl; int f4; Pair_828E5F40 p; } Obj_828E5F40;
static __forceinline void Pair_init(Pair_828E5F40 *p, int a, int b) { p->a = a; p->b = b; }
void fn_828E5F40(Obj_828E5F40 *o, int a, int b)
{
    o->f4 = 0;
    o->vtbl = lbl_8202740C;
    Pair_init(&o->p, a, b);
}

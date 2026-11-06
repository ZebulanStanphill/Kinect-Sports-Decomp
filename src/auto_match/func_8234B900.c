typedef struct { void *begin; void *end; void *cap; } Vec_8234B900;
typedef struct { void *p; } Ref_8234B900;
typedef struct {
    int f00;
    Ref_8234B900 f04;
    int f08[3];
    Ref_8234B900 f14;
    int f18;
    Vec_8234B900 vec;
} Obj_8234B900;
extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);

static __forceinline void vecTidy(Vec_8234B900 *v)
{
    if (v->begin != 0) {
        fn_8265CA20(v->begin);
    }
    v->begin = 0;
    v->end = 0;
    v->cap = 0;
}
static __forceinline void refRelease(Ref_8234B900 *r)
{
    if (r->p != 0) {
        fn_822315A0(r->p);
    }
}

void fn_8234B900(Obj_8234B900 *o)
{
    vecTidy(&o->vec);
    refRelease(&o->f14);
    refRelease(&o->f04);
}

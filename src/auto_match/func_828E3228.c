typedef struct Str_828E3228 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int cap;
} Str_828E3228;

typedef struct Obj_828E3228 {
    void *vt;
    int field4;
    void *p8;
    Str_828E3228 s;
} Obj_828E3228;

extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_8219689C[];

static __forceinline void Str_Tidy_828E3228(Str_828E3228 *s)
{
    if (s->cap >= 0x10) {
        fn_8265CA20(s->u.ptr);
    }
    s->cap = 0xf;
    s->u.buf[s->size = 0] = 0;
}

static __forceinline void Ref_Release_828E3228(void **pp)
{
    if (*pp != 0) {
        fn_822315A0(*pp);
    }
}

void fn_828E3228(Obj_828E3228 *o)
{
    o->vt = lbl_8219689C;
    Str_Tidy_828E3228(&o->s);
    Ref_Release_828E3228(&o->p8);
}

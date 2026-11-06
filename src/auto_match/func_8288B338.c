typedef struct {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} Str_8288B338;
typedef struct {
    void *vt;
    int f4, f8, fC;
    void *f10;
    int alval;
    Str_8288B338 name;
} Obj_8288B338;
extern char lbl_82023548[];
extern void fn_8265CA20(void *p);

static __forceinline void Str_Tidy_8288B338(Str_8288B338 *s)
{
    if (s->res >= 16) {
        fn_8265CA20(s->bx.ptr);
    }
    s->res = 15;
    s->size = 0;
    (s->res < 16 ? s->bx.buf : s->bx.ptr)[0] = 0;
}

void fn_8288B338(Obj_8288B338 *o)
{
    o->vt = lbl_82023548;
    if (o->f10 != 0) {
        fn_8265CA20(o->f10);
        o->f10 = 0;
    }
    Str_Tidy_8288B338(&o->name);
}

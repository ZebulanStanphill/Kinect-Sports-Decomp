typedef struct Str_828E32A0 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} Str_828E32A0;

typedef struct Obj_828E32A0 {
    void *vt;
    int f4;
    int f8;
    void *f0c;
    Str_828E32A0 s;
} Obj_828E32A0;

extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);
extern unsigned int lbl_8219688C;

void fn_828E32A0(Obj_828E32A0 *p)
{
    Str_828E32A0 *s;

    p->vt = &lbl_8219688C;
    s = &p->s;
    if (16 <= s->res) {
        char *ptr = s->bx.ptr;
        fn_8265CA20(ptr);
    }
    s->res = 15;
    s->size = 0;
    (16 <= s->res ? s->bx.ptr : s->bx.buf)[0] = 0;
    if (p->f0c != 0) {
        fn_822315A0(p->f0c);
    }
}

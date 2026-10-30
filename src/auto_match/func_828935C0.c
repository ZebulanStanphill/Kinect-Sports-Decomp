extern void fn_822315A0(void *);
extern void fn_8265CA20(void *);

typedef struct Str_828935C0 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} Str_828935C0;

typedef struct Obj_828935C0 {
    int pad0;
    Str_828935C0 str;
    char pad1[0x38 - 0x1c];
    void *rc;
} Obj_828935C0;

void fn_828935C0(void *unused, Obj_828935C0 *o)
{
    Str_828935C0 *s = &o->str;
    if (o->rc != 0) {
        fn_822315A0(o->rc);
    }
    if (s->res >= 0x10) {
        fn_8265CA20(s->bx.ptr);
    }
    s->size = 0;
    s->res = 0xf;
    s->bx.buf[0] = 0;
}

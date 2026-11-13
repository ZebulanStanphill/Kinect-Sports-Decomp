typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_822CA5B0 Obj_822CA5B0;
typedef struct Sub_822CA5B0 {
    char pad0[0x114];
    char *m114;
} Sub_822CA5B0;
struct Obj_822CA5B0 {
    struct {
        int pad[2];
        char *(*f8)(Obj_822CA5B0 *);
    } *vt;
    char pad4[0xbc - 4];
    char *m;
};

extern void fn_822BD278(__vector4 *, char *);
extern void fn_822CB020(__vector4 *, char *);
extern void fn_822C6D68(char *, char *, char *, __vector4);
extern void fn_822C69F0(char *, char *, char *, __vector4);

void fn_822CA5B0(Obj_822CA5B0 *o)
{
    __vector4 a;
    __vector4 b;
    char *q;

    fn_822BD278(&a, o->vt->f8(o) + 0x144);
    fn_822CB020(&b, o->vt->f8(o) + 0xf0);
    if (o->m != 0) {
        q = *(char **)(o->m + 0x114) + 0x50;
        fn_822C6D68(q, o->m + 0x80, o->m + 0xc0, a);
        fn_822C69F0(q, o->m + 0x80, o->m + 0xc0, b);
    }
}

typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*destroy)(Obj *self, int flags);
    void (*f4)(Obj *self);
    void (*release)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct S {
    char pad0[0x80];
    char sub80[0x180];
    Obj *a;
    Obj *b;
    char pad208[0xF8];
    void *c;
    void *d;
} S;

extern void fn_825604A0(void *p);
extern void *fn_82F4EC30(int a);
extern void fn_82F52C20(void *a, void *b, int c);

void fn_824F6478(S *p)
{
    void *v;

    p->a->vtbl->release(p->a);
    if (p->a)
        p->a->vtbl->destroy(p->a, 1);
    p->b->vtbl->release(p->b);
    if (p->b)
        p->b->vtbl->destroy(p->b, 1);
    fn_825604A0(p->sub80);
    v = p->c;
    if (v) {
        fn_82F52C20(fn_82F4EC30(0), v, 1);
        p->c = 0;
    }
    v = p->d;
    if (v) {
        fn_82F52C20(fn_82F4EC30(0), v, 1);
        p->d = 0;
    }
}

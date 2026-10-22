typedef struct Inner Inner;
typedef struct {
    void *f0;
    void *(*dtor)(Inner *self, int flags);
} InnerVtbl;
struct Inner {
    InnerVtbl *vtbl;
    char pad4[0x7c];
    int f80;
};

typedef struct Obj Obj;
typedef struct {
    char pad0[0x3c];
    void (*f3C)(Obj *self, int arg);
} ObjVtbl;

struct Obj {
    ObjVtbl *vtbl;
    char pad4[0x40];
    void *a;
    Inner *inner;
    void *b;
};

extern void fn_82A4B708(Obj *p);
extern void fn_82A4F4E0(void *p);
extern void fn_82A599E8(void *p);
extern void fn_82A5C8F8(void *p);

void fn_82A4BB80(Obj *p)
{
    void *q;

    if (p->inner != 0 && p->inner->f80 != 0) {
        p->vtbl->f3C(p, 1);
    }
    fn_82A4B708(p);
    q = p->a;
    if (q != 0) {
        fn_82A599E8(q);
        fn_82A4F4E0(q);
        p->a = 0;
    }
    q = p->b;
    if (q != 0) {
        fn_82A5C8F8(q);
        fn_82A4F4E0(q);
        p->b = 0;
    }
    if (p->inner != 0) {
        fn_82A4F4E0(p->inner->vtbl->dtor(p->inner, 0));
        p->inner = 0;
    }
}

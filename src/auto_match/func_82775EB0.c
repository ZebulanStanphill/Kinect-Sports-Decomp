extern void fn_8267BE38(void *p);
extern void fn_82774258(void *p);

typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f[17];
    void (*release)(Obj *o, void *ref, int n);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
};

typedef struct Ref {
    Obj *obj;
    int extra;
} Ref;

typedef struct S {
    int x0;
    void *b4;
    int x8;
    int xc;
    void *b10;
    int x14;
    int x18;
    Ref ref;
} S;

S *fn_82775EB0(S *p, unsigned int flags)
{
    Ref *r = &p->ref;

    if (r->obj != 0) {
        r->obj->vt->release(r->obj, r, 3);
    }
    r->obj = 0;
    r->extra = 0;
    fn_8267BE38(p->b10);
    fn_8267BE38(p->b4);
    fn_82774258(p);
    if (flags & 1) {
        fn_8267BE38(p);
    }
    return p;
}

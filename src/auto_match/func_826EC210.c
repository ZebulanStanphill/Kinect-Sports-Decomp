typedef struct Obj Obj;
typedef struct ObjVt {
    void *pad[17];
    void (*release)(Obj *self, void *ref, int mode);
} ObjVt;
struct Obj { ObjVt *vt; };
typedef struct Ref { Obj *obj; int extra; } Ref;
typedef struct S {
    int a;
    int b, c, d;
    int e;
    char sub[12];
    Ref ref;
} S;
extern void fn_826EBDE8(void *p, int v);

void fn_826EC210(S *s)
{
    Ref *r = &s->ref;
    if (r->obj)
        r->obj->vt->release(r->obj, r, 2);
    r->obj = 0;
    r->extra = 0;
    fn_826EBDE8(s->sub, 0);
    s->a = 0;
    s->b = -1;
    s->c = -1;
    s->d = -1;
    s->e = 0;
}

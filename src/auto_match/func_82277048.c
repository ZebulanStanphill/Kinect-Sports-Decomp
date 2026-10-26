typedef struct Obj Obj;
typedef struct ObjVt {
    void *pad;
    void (*f)(Obj *self);
} ObjVt;
struct Obj { ObjVt *vt; };
typedef struct Inner {
    char pad[0x10];
    Obj *obj;
    int pad2[2];
    int done;
} Inner;
typedef struct S { int pad; Inner *in; } S;

void fn_82277048(S *s)
{
    Inner *in = s->in;
    if (in->done == 0) {
        if (in->obj != 0)
            in->obj->vt->f(in->obj);
        in->done = 1;
    }
}

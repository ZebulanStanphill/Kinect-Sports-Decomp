typedef struct Obj Obj;
typedef struct {
    void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};
typedef struct {
    int unk0;
    Obj **begin;
    Obj **end;
    Obj **cap;
} Owner;

extern void *lbl_831BC768;
extern void fn_82FA5190(void *heap, void *p);
extern void fn_83029E70(Obj *o);

void fn_8301B638(Owner *v)
{
    Obj **it;
    Obj *o;
    void *heap;

    for (it = v->begin; it != v->end; it++) {
        o = *it;
        fn_83029E70(o);
        heap = lbl_831BC768;
        if (o != 0) {
            o->vtbl->dtor(o, 0);
            fn_82FA5190(heap, o);
        }
    }
    if (v->begin != 0) {
        v->end = v->begin;
        fn_82FA5190(lbl_831BC768, v->begin);
        v->begin = 0;
        v->end = 0;
        v->cap = 0;
    }
}

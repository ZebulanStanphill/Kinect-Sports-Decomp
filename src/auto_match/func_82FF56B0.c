typedef struct Obj Obj;
typedef struct {
    void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};
typedef struct {
    Obj **begin;
    Obj **end;
    Obj **cap;
} Vec;

extern void *lbl_831BC768;
extern void fn_82FA5190(void *heap, void *p);
extern void fn_8302ABC0(Obj *o);

void fn_82FF56B0(void *unused, Vec *v)
{
    Obj **it;
    Obj *o;
    void *heap;

    it = v->begin;
    if (v->end != it) {
        do {
            o = *it;
            fn_8302ABC0(o);
            heap = lbl_831BC768;
            if (o != 0) {
                o->vtbl->dtor(o, 0);
                fn_82FA5190(heap, o);
            }
            it++;
        } while (it != v->end);
    }
    if (v->begin != 0) {
        v->end = v->begin;
        fn_82FA5190(lbl_831BC768, v->begin);
        v->begin = 0;
        v->end = 0;
        v->cap = 0;
    }
}

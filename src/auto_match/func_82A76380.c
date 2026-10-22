typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0;
    void *f4;
    void (*lock)(Obj *o);
    void *fc;
    void *f10;
    void (*unlock)(Obj *o);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
    int pad[8];
    int refs;
    int f28;
};

extern void fn_82A761F8(Obj *o);
extern void fn_82A4F4E0(Obj *o);

void fn_82A76380(Obj *o)
{
    o->vtbl->lock(o);
    if (--o->refs == 0 && o->f28 != 0) {
        fn_82A761F8(o);
        fn_82A4F4E0(o);
    } else {
        o->vtbl->unlock(o);
    }
}

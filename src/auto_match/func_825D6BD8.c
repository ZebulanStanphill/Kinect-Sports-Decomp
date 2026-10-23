typedef struct Res {
    char pad[0x14];
    void *handle;
} Res;
typedef struct Slot {
    unsigned int id;
    Res *res;
    unsigned int info;
} Slot;
typedef struct Obj {
    char pad[0x11c];
    Slot a;
    Slot b;
} Obj;

extern void fn_8251FA58(Res *r);
extern Res *fn_8251F720(unsigned int *id, int flags);
extern unsigned int fn_8284C860(void *h);
extern void fn_82837D98(void *h, unsigned int idx, unsigned int *out);

void fn_825D6BD8(Obj *o, unsigned int *a, unsigned int *b)
{
    unsigned int info;
    unsigned int v;

    if (o->a.res != 0) {
        fn_8251FA58(o->a.res);
    }
    o->a.id = *a;
    o->a.res = fn_8251F720(a, 0);
    v = fn_8284C860(o->a.res->handle);
    fn_82837D98(o->a.res->handle, (v >> 1) & 0x7f, &info);
    o->a.info = info;
    if (b != 0 && *b != 0) {
        if (o->b.res != 0) {
            fn_8251FA58(o->b.res);
        }
        o->b.id = *b;
        o->b.res = fn_8251F720(b, 0);
        v = fn_8284C860(o->b.res->handle);
        fn_82837D98(o->b.res->handle, (v >> 1) & 0x7f, &info);
        o->b.info = info;
    }
}

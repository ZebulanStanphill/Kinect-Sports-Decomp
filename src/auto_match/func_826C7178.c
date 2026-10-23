typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *slot0;
    void *slot1;
    unsigned char (*IsActive)(Obj *);
    void *slots3[0x80 / 4 - 3];
    void (*Update)(Obj *, int, int);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
    int refs;
    char pad8[0xa8 - 8];
    char sub[1];
};

extern void fn_8267C498(Obj *o);
extern void fn_82699338(void *sub, int a, int b);

void fn_826C7178(Obj *o, int a, int b)
{
    if (o != 0) {
        o->refs++;
    }
    if (o->vtbl->IsActive(o)) {
        fn_82699338(o->sub, a, b);
        o->vtbl->Update(o, a, b);
    }
    fn_8267C498(o);
}

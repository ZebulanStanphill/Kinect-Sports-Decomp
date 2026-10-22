typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct Thing {
    void *vtbl;
    char pad4[0x1a8 - 4];
    void *p1a8;
    Obj *p1ac;
    void *p1b0;
    void *p1b4;
    int f1b8;
    int f1bc;
} Thing;

extern void fn_8265CA20(void *p);
extern unsigned int lbl_821C3738;

void fn_8252DB70(Thing *param_1)
{
    Obj *o;

    o = param_1->p1ac;
    param_1->vtbl = &lbl_821C3738;
    if (o != 0) {
        o->vtbl->dtor(o, 1);
        param_1->p1ac = 0;
    }
    if (param_1->p1b0 != 0) {
        fn_8265CA20(param_1->p1b0);
        param_1->p1b0 = 0;
    }
    if (param_1->p1a8 != 0) {
        fn_8265CA20(param_1->p1a8);
        param_1->p1a8 = 0;
    }
    if (param_1->p1b4 != 0) {
        fn_8265CA20(param_1->p1b4);
        param_1->p1b4 = 0;
    }
    param_1->f1bc = 0;
}

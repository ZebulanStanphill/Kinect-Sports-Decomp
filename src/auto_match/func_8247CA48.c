typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct Thing {
    char pad0[0x44];
    void *p44;
    void *p48;
    char pad4c[0x50 - 0x4c];
    char sub50[0x70 - 0x50];
    Obj *p70;
    void *p74;
} Thing;

extern void fn_82286F08(void *p);
extern void fn_8228BE30(void *p);
extern void fn_8229E090(void *p, int a, int b);
extern void fn_82359C18(void *p);
extern void fn_8265CA20(void *p);

void fn_8247CA48(Thing *param_1)
{
    void *p;

    if (param_1->p44 != 0) {
        fn_82286F08(param_1->p44);
    }
    p = param_1->p48;
    if (p != 0) {
        fn_8228BE30(p);
        fn_8265CA20(p);
    }
    if (param_1->p70 != 0) {
        param_1->p70->vtbl->dtor(param_1->p70, 1);
    }
    if (param_1->p74 != 0) {
        fn_8229E090(param_1->p74, 0, 0);
        param_1->p74 = 0;
    }
    fn_82359C18(param_1->sub50);
}

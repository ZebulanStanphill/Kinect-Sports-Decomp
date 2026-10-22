typedef struct Obj Obj;
typedef struct {
    void (*f0)(Obj *);
    void (*f1)(Obj *);
    void (*f2)(Obj *);
} ObjVtbl;
struct Obj {
    ObjVtbl *vt;
    int pad[9];
    int a;
    int pad2[0x3f - 11];
    void *p3f;
    void *p40;
};

extern int fn_824CD030(Obj *o);
extern int fn_82F4EC30(int a);
extern void fn_82F52BC0(int a, void *b);
extern void fn_82F52C20(int a, void *b, int c);

void fn_824CFE00(Obj *param_1, int param_2)
{
    int a;
    int x;
    int y;

    a = param_1->a;
    if (fn_824CD030(param_1) != 0) {
        x = fn_82F4EC30(param_2);
        y = fn_82F4EC30(a);
        if (param_1->p3f != 0) {
            fn_82F52C20(x, param_1->p3f, 0);
            fn_82F52BC0(y, param_1->p3f);
        }
        if (param_1->p40 != 0) {
            fn_82F52C20(x, param_1->p40, 0);
            fn_82F52BC0(y, param_1->p40);
        }
    }
    param_1->vt->f2(param_1);
}

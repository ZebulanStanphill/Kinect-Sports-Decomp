typedef struct Target Target;
typedef struct {
    void (*f0)(Target *t);
    void (*f1)(Target *t);
    void (*f2)(Target *t, void *obj);
} TargetVtbl;
struct Target {
    TargetVtbl *vtbl;
};

typedef struct {
    char pad0[0x2c];
    unsigned char dirty;
    char pad2d[3];
    Target *target;
} Obj;

extern Target *fn_82868EF0(void);

void fn_82875C80(void *param_1, Obj *param_2)
{
    Target *t;

    if (param_2->dirty == 1) {
        param_2->dirty = 0;
        t = fn_82868EF0();
        if (param_2->target != t) {
            param_2->target = t;
            t->vtbl->f2(t, param_2);
        }
    }
}

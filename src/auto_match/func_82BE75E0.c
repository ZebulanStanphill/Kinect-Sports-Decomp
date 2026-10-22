typedef struct VObj {
    void (**vtbl)(struct VObj *, int);
} VObj;

typedef struct Obj {
    void *vtbl;
    char pad4[0x30 - 0x4];
    void *f30;
    char pad34[0x8c - 0x34];
    VObj *f8c;
    char pad90[0xa0 - 0x90];
    int fa0;
} Obj;

extern void fn_82BEB7A8(Obj *);
extern void fn_82BF2A00(int *);
extern char lbl_820E9974[];
extern void (*lbl_831751CC)(void *);

void fn_82BE75E0(Obj *param_1)
{
    VObj *p = param_1->f8c;

    param_1->vtbl = lbl_820E9974;
    if (p != 0) {
        (*p->vtbl[0])(p, 1);
        param_1->f8c = 0;
    }
    if (param_1->f30 != 0) {
        lbl_831751CC(param_1->f30);
        param_1->f30 = 0;
    }
    fn_82BF2A00(&param_1->fa0);
    fn_82BEB7A8(param_1);
}

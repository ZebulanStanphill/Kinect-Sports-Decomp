typedef struct Iface Iface;
typedef struct IfaceVtbl {
    void *f0;
    void (*AddRef)(Iface *);
} IfaceVtbl;

struct Iface {
    IfaceVtbl *vtbl;
};

typedef struct Obj {
    char pad0[0x44];
    Iface a;
    char pad48[0x8c - 0x48];
    Iface b;
    char pad90[0xd4 - 0x90];
    Iface c;
} Obj;

int fn_82C04508(Obj *param_1, Iface **param_2, Iface **param_3, Iface **param_4)
{
    if (param_2 != 0) {
        param_1->a.vtbl->AddRef(&param_1->a);
        *param_2 = &param_1->a;
    }
    if (param_3 != 0) {
        param_1->b.vtbl->AddRef(&param_1->b);
        *param_3 = &param_1->b;
    }
    if (param_4 != 0) {
        param_1->c.vtbl->AddRef(&param_1->c);
        *param_4 = &param_1->c;
    }
    return 0;
}

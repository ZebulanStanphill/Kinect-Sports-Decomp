typedef struct Iface_82EE9850 Iface_82EE9850;

typedef struct IfaceVtbl_82EE9850 {
    void *f0;
    void (*AddRef)(Iface_82EE9850 *self);
    void (*Release)(Iface_82EE9850 *self);
} IfaceVtbl_82EE9850;

struct Iface_82EE9850 {
    IfaceVtbl_82EE9850 *vt;
    int f4;
};

typedef struct Obj_82EE9850 {
    char pad0[0x4c];
    int f4c;
    char pad50[0x70 - 0x50];
    int f70;
    char pad74[0x10ac - 0x74];
    int f10ac;
} Obj_82EE9850;

extern void *fn_82E50BE8(int size, int a, int b, int c, int d);
extern Iface_82EE9850 *fn_82E66120(void *mem, int a, int b, int c);
extern int fn_8306C690(int a, int b, int c, int *out);
extern unsigned long fn_82A1F470(void);

#define HRESULT_FROM_WIN32_82EE9850(x) \
    ((int)(x) <= 0 ? (int)(x) : (int)(((x) & 0x0000FFFF) | 0x80070000))

int fn_82EE9850(Obj_82EE9850 *p)
{
    int hr = 0;
    void *mem;
    Iface_82EE9850 *o;
    unsigned long err;

    if (p->f4c != 0)
        return 0x80070006;

    mem = fn_82E50BE8(0x38, 0, 0, 0, 0);
    o = mem ? fn_82E66120(mem, 0, 0, 0) : 0;

    if (o == 0)
        return 0x8007000e;

    o->vt->AddRef(o);
    if (fn_8306C690(p->f70, 0, 1, &o->f4) == 0) {
        err = fn_82A1F470();
        o->vt->Release(o);
        hr = HRESULT_FROM_WIN32_82EE9850(err);
    } else {
        p->f10ac = 1;
    }
    return hr;
}

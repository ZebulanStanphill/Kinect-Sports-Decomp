typedef struct IUnk IUnk;
typedef struct IUnkVtbl {
    int (*QueryInterface)(IUnk *self, const void *iid, void **out);
    unsigned int (*AddRef)(IUnk *self);
    unsigned int (*Release)(IUnk *self);
} IUnkVtbl;
struct IUnk { IUnkVtbl *vtbl; };

typedef struct S {
    int f0;
    int f4;
    int f8;
    void *fc;
} S;

extern char lbl_82154C78[];
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern IUnk *fn_82E7A468(void *mem, void *arg, int *hr);

int fn_82F3E260(S *s, void **out)
{
    IUnk *obj;
    void *mem;
    int hr;

    if (s->fc == 0)
        return 0xC00D36B6;
    *out = 0;
    hr = 0;
    mem = fn_82E50BE8(0x358, 0, 0, 0, 0);
    obj = mem ? fn_82E7A468(mem, s->fc, &hr) : 0;
    if (hr < 0)
        return hr;
    if (obj == 0)
        return 0x8007000E;
    hr = obj->vtbl->QueryInterface(obj, lbl_82154C78, out);
    obj->vtbl->Release(obj);
    return hr < 0 ? hr : 0;
}

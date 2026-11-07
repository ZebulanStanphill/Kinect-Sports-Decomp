extern char lbl_8215ED68[];

typedef struct IUnk_82E43270 IUnk_82E43270;

typedef struct IUnkVtbl_82E43270 {
    int (*QueryInterface)(IUnk_82E43270 *self, const void *iid, IUnk_82E43270 **out);
    int (*AddRef)(IUnk_82E43270 *self);
    int (*Release)(IUnk_82E43270 *self);
    void *pad[7];
    int (*Get)(IUnk_82E43270 *self, IUnk_82E43270 **out);
} IUnkVtbl_82E43270;

struct IUnk_82E43270 {
    IUnkVtbl_82E43270 *vt;
};

extern int fn_82E42D28(int self, IUnk_82E43270 *obj);

int fn_82E43270(int param_1, IUnk_82E43270 *param_2)
{
    int hr;
    IUnk_82E43270 *a;
    IUnk_82E43270 *b;

    if (param_2 == 0) {
        return (int)0x80070057;
    }
    a = 0;
    b = 0;
    if (*(unsigned int *)(param_1 + 0x594) != 0) {
        hr = (int)0xC00D4653;
    } else {
        hr = param_2->vt->QueryInterface(param_2, lbl_8215ED68, &a);
        if (hr >= 0) {
            hr = a->vt->Get(a, &b);
            if (hr >= 0) {
                hr = fn_82E42D28(param_1, b);
            }
        }
        if (a != 0) {
            a->vt->Release(a);
            a = 0;
        }
        if (b != 0) {
            b->vt->Release(b);
        }
    }
    return hr;
}

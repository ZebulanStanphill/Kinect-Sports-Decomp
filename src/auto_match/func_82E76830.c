typedef struct IUnk_82E76830 IUnk_82E76830;

typedef struct Vtbl_82E76830 {
    int (*QueryInterface)(IUnk_82E76830 *self, void *iid, IUnk_82E76830 **out);
    unsigned long (*AddRef)(IUnk_82E76830 *self);
    unsigned long (*Release)(IUnk_82E76830 *self);
    void *slot3;
    int (*Get)(IUnk_82E76830 *self, void *id, int flags, IUnk_82E76830 **out);
} Vtbl_82E76830;

struct IUnk_82E76830 {
    Vtbl_82E76830 *vt;
};

typedef struct Obj_82E76830 {
    char pad[0x138];
    unsigned int value;
} Obj_82E76830;

extern char lbl_820ED018[];
extern char lbl_82154C58[];
extern char lbl_82154C18[];
extern char lbl_82154AA8[];

extern int fn_82E59440(void *src, void *a, void *b, IUnk_82E76830 **out);
extern int fn_82E62670(IUnk_82E76830 *p, unsigned int *out);
extern int fn_82E626B0(IUnk_82E76830 *p, unsigned int *out);
extern int fn_82E626F0(IUnk_82E76830 *p, unsigned int *out);

int fn_82E76830(Obj_82E76830 *self, void *src)
{
    IUnk_82E76830 *p0;
    IUnk_82E76830 *p1;
    IUnk_82E76830 *p2;
    IUnk_82E76830 *p;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    int hr;

    if (src == 0) {
        return 0x80070057;
    }
    p0 = 0;
    p1 = 0;
    p2 = 0;
    hr = fn_82E59440(src, lbl_820ED018, lbl_82154C58, &p0);
    if (hr >= 0) {
        hr = p0->vt->QueryInterface(p0, lbl_82154C18, &p1);
        if (hr >= 0) {
            hr = p1->vt->Get(p1, lbl_82154AA8, 0, &p2);
            if (hr >= 0) {
                a = 0;
                p = p2;
                hr = fn_82E626B0(p, &a);
                if (hr >= 0) {
                    b = 0;
                    hr = fn_82E626F0(p, &b);
                    if (hr >= 0) {
                        if (a == b) {
                            self->value = a;
                        } else {
                            self->value = 0;
                        }
                        c = 0;
                        hr = fn_82E62670(p, &c);
                    }
                }
            }
        }
    }
    if (p0 != 0) {
        p0->vt->Release(p0);
        p0 = 0;
    }
    if (p1 != 0) {
        p1->vt->Release(p1);
        p1 = 0;
    }
    if (p2 != 0) {
        p2->vt->Release(p2);
    }
    return hr;
}

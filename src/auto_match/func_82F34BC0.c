typedef struct IUnk_82F34BC0 IUnk_82F34BC0;

typedef struct Vtbl_82F34BC0 {
    int (*QueryInterface)(IUnk_82F34BC0 *self, void *iid, IUnk_82F34BC0 **out);
    unsigned long (*AddRef)(IUnk_82F34BC0 *self);
    unsigned long (*Release)(IUnk_82F34BC0 *self);
    void *slot3;
    int (*Get)(IUnk_82F34BC0 *self, void *id, int flags, IUnk_82F34BC0 **out);
} Vtbl_82F34BC0;

struct IUnk_82F34BC0 {
    Vtbl_82F34BC0 *vt;
};

typedef struct Obj_82F34BC0 {
    char pad0[0xc];
    void *source;
    char pad10[0x128];
    unsigned short count;
} Obj_82F34BC0;

extern char lbl_820ED018[];
extern char lbl_82154C58[];
extern char lbl_82154C18[];
extern char lbl_821549E8[];

extern int fn_82E59440(void *src, void *a, void *b, IUnk_82F34BC0 **out);
extern int fn_82E72520(IUnk_82F34BC0 *p, unsigned short *out);

int fn_82F34BC0(Obj_82F34BC0 *self)
{
    unsigned short count = 0;
    IUnk_82F34BC0 *p0 = 0;
    IUnk_82F34BC0 *p1 = 0;
    IUnk_82F34BC0 *p2 = 0;
    int hr;
    int size = 0x22;
    unsigned short n = self->count;

    if (n == 0) {
        hr = fn_82E59440(self->source, lbl_820ED018, lbl_82154C58, &p0);
        if (hr >= 0) {
            hr = p0->vt->QueryInterface(p0, lbl_82154C18, &p1);
            if (hr >= 0) {
                hr = p1->vt->Get(p1, lbl_821549E8, 0, &p2);
                if (hr >= 0)
                    hr = fn_82E72520(p2, &count);
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
        if (p2 != 0)
            p2->vt->Release(p2);
        if (hr < 0)
            goto done;
        n = count;
    }
    size = n * 4 + 0x22;
done:
    return size;
}

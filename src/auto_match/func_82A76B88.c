typedef struct Obj_82A76B88 Obj_82A76B88;
typedef struct {
    void *slots0[3];
    void (*release)(Obj_82A76B88 *, int);
    void *slots4[8];
    int (*init)(Obj_82A76B88 *, void *, void *, void *, void *, void *);
} ObjVtbl_82A76B88;
struct Obj_82A76B88 { ObjVtbl_82A76B88 *vt; };

extern char lbl_83219D50[];
void *fn_82A3FF60(void *, int, int, int);
Obj_82A76B88 *fn_82A76A68(void *, void *);
void fn_82A4F4E0(void);

int fn_82A76B88(void *a, void *b, void *c, void *d, void *e, void *f, Obj_82A76B88 **out)
{
    Obj_82A76B88 *w;
    void *m;
    int hr;
    m = fn_82A3FF60(lbl_83219D50, 0x80, 0x20970006, 0);
    w = m != 0 ? fn_82A76A68(m, f) : 0;
    if (w == 0) {
        hr = 0x8007000e;
    } else {
        hr = w->vt->init(w, a, b, c, d, e);
        if (hr >= 0) {
            *out = w;
        } else {
            w->vt->release(w, 0);
            fn_82A4F4E0();
        }
    }
    return hr;
}

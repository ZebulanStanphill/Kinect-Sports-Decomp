typedef struct Obj_82A78868 Obj_82A78868;
typedef struct ObjVtbl_82A78868 {
    void *slots0[3];
    void (*release)(Obj_82A78868 *, int);
} ObjVtbl_82A78868;
struct Obj_82A78868 { ObjVtbl_82A78868 *vt; };

extern char lbl_83219D50[];
void *fn_82A3FF60(void *, int, int, int);
Obj_82A78868 *fn_82A781D8(void *, void *, void *);
int fn_82A78340(Obj_82A78868 *, void *, void *, void *, void *);
void fn_82A4F4E0(void);

int fn_82A78868(void *a, void *b, void *c, void *d, void *e, void *f, Obj_82A78868 **out)
{
    Obj_82A78868 *w;
    void *m;
    int hr;
    m = fn_82A3FF60(lbl_83219D50, 0x110, 0x20970006, 0);
    w = m != 0 ? fn_82A781D8(m, b, f) : 0;
    if (w == 0) {
        hr = 0x8007000e;
    } else {
        hr = fn_82A78340(w, a, c, d, e);
        if (hr >= 0) {
            *out = w;
        } else {
            w->vt->release(w, 0);
            fn_82A4F4E0();
        }
    }
    return hr;
}

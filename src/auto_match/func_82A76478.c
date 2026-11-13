typedef struct Obj_82A76478 {
    void *vt;
    int pad4[7];
    int f20;
    int f24;
    int f28;
    int f2c;
    int limit;
    int f34;
    int pad38[3];
} Obj_82A76478;

extern char lbl_83219D50[];
extern char lbl_82089670[];
extern void *fn_82A3FF60(void *heap, int size, int tag, int flags);
extern int fn_82A76260(Obj_82A76478 *obj, void *a, void *b, void *c);
extern void fn_82A761F8(Obj_82A76478 *obj);
extern void fn_82A4F4E0(void *p);

static __forceinline Obj_82A76478 *construct(Obj_82A76478 *o)
{
    o->f20 = 0;
    o->vt = lbl_82089670;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->limit = 0x7fffffff;
    o->f34 = 0;
    return o;
}

int fn_82A76478(void *a, void *b, void *c, Obj_82A76478 **out)
{
    Obj_82A76478 *o;
    void *m;
    int hr;
    m = fn_82A3FF60(lbl_83219D50, 0x44, 0x20970006, 0);
    o = m != 0 ? construct((Obj_82A76478 *)m) : 0;
    if (o == 0) {
        hr = 0x8007000e;
    } else {
        hr = fn_82A76260(o, a, b, c);
        if (hr >= 0) {
            *out = o;
        } else {
            fn_82A761F8(o);
            fn_82A4F4E0(o);
        }
    }
    return hr;
}

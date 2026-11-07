typedef struct Obj_82E617F8 Obj_82E617F8;

typedef struct Vtbl_82E617F8 {
    void *s0;
    void *s4;
    unsigned int (*Release)(Obj_82E617F8 *self);
    void *sc;
    void *s10;
    int (*Set)(Obj_82E617F8 *self, Obj_82E617F8 *item, int flags);
    void *s18;
    int (*Query)(Obj_82E617F8 *self, const void *iid, void *out);
} Vtbl_82E617F8;

struct Obj_82E617F8 {
    Vtbl_82E617F8 *vt;
};

extern char lbl_82154B18[];
extern char lbl_820F8F08[];
extern char lbl_8214C720[];

extern int fn_82E60688(Obj_82E617F8 *a, Obj_82E617F8 *p);
extern int fn_82E60E60(Obj_82E617F8 *c, Obj_82E617F8 *a, Obj_82E617F8 *q);
extern int fn_82E62670(Obj_82E617F8 *p, unsigned int *v);
extern int fn_82E628C8(Obj_82E617F8 *p, unsigned int v);
extern int fn_82E5A200(Obj_82E617F8 *q, Obj_82E617F8 *p);

int fn_82E617F8(Obj_82E617F8 *a, Obj_82E617F8 *b, Obj_82E617F8 *c)
{
    Obj_82E617F8 *p;
    Obj_82E617F8 *q;
    unsigned int v;
    unsigned int flags;
    int hr;

    if (a == 0 || b == 0 || c == 0) {
        return (int)0x80070057;
    }
    p = 0;
    q = 0;
    hr = b->vt->Query(b, lbl_82154B18, &p);
    if (hr < 0) goto done;
    hr = fn_82E60688(a, p);
    if (hr < 0) goto done;
    hr = b->vt->Query(b, lbl_820F8F08, &q);
    if (hr < 0) goto done;
    hr = fn_82E60E60(c, a, q);
    if (hr < 0) goto done;
    flags = 0;
    hr = a->vt->Query(a, lbl_8214C720, &flags);
    if (hr < 0) goto done;
    if ((flags & 0x80000000) != 0) {
        v = 0;
        hr = fn_82E62670(p, &v);
        if (hr < 0) goto done;
        v |= 0x80000000;
        hr = fn_82E628C8(p, v);
        if (hr < 0) goto done;
        hr = fn_82E5A200(q, p);
        if (hr < 0) goto done;
    }
    hr = c->vt->Set(c, p, 0);
    if (hr < 0) goto done;
    hr = c->vt->Set(c, q, 0);
done:
    if (p != 0) {
        p->vt->Release(p);
        p = 0;
    }
    if (q != 0) {
        q->vt->Release(q);
    }
    return hr;
}

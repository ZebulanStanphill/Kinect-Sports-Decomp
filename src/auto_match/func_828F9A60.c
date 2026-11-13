typedef struct Obj_828F9A60 Obj_828F9A60;
typedef struct {
    void *slots[5];
    void (*f14)(Obj_828F9A60 *, int);
    int (*f18)(Obj_828F9A60 *, void *);
} ObjVt_828F9A60;
struct Obj_828F9A60 {
    ObjVt_828F9A60 *vt;
    int refs;
    int f8;
    int fc;
};
extern char lbl_8202971C[];
extern void *fn_8265C940(unsigned int size, unsigned int flags);

int fn_828F9A60(void *arg, Obj_828F9A60 **out)
{
    Obj_828F9A60 *mem;
    Obj_828F9A60 *p;
    int hr;

    if (out == 0)
        return 0x8876086c;
    mem = (Obj_828F9A60 *)fn_8265C940(0x10, 0x24810000);
    if (mem != 0) {
        mem->fc = 0;
        mem->vt = (ObjVt_828F9A60 *)lbl_8202971C;
        mem->f8 = 0;
        mem->refs = 1;
        p = mem;
    } else {
        p = 0;
    }
    if (p == 0)
        return 0x8007000E;
    hr = p->vt->f18(p, arg);
    if (hr < 0) {
        p->vt->f14(p, 1);
        return hr;
    }
    *out = p;
    return 0;
}

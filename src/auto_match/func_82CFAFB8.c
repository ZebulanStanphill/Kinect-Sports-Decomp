typedef struct Res_82CFAFB8 {
    unsigned char v;
} Res_82CFAFB8;

struct Iface_82CFAFB8;

typedef struct Vtbl_82CFAFB8 {
    void *f0;
    void *f4;
    void *f8;
    Res_82CFAFB8 *(*get)(Res_82CFAFB8 *out, struct Iface_82CFAFB8 *self);
} Vtbl_82CFAFB8;

typedef struct Iface_82CFAFB8 {
    Vtbl_82CFAFB8 *vt;
} Iface_82CFAFB8;

typedef struct Obj_82CFAFB8 {
    int f0;
    int f4;
    Iface_82CFAFB8 *p;
    int fC;
    int begin;
    int end;
} Obj_82CFAFB8;

Res_82CFAFB8 *fn_82CFAFB8(Res_82CFAFB8 *out, Obj_82CFAFB8 *o)
{
    Res_82CFAFB8 tmp;
    Res_82CFAFB8 *r;

    if (o->p != 0) {
        r = o->p->vt->get(&tmp, o->p);
    } else {
        tmp.v = o->begin != o->end;
        r = &tmp;
    }
    *out = *r;
    return out;
}

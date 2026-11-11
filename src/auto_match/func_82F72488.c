typedef struct Iface_82F72488 Iface_82F72488;
typedef struct { void *pad[2]; int (*get)(Iface_82F72488 *,int); } Vt_82F72488;
struct Iface_82F72488 { Vt_82F72488 *vt; };
typedef struct { Iface_82F72488 *obj; } Holder_82F72488;
typedef struct { int pad; Holder_82F72488 *holder; } Obj_82F72488;
int fn_82F72488(Obj_82F72488 *o,int fallback)
{
    Holder_82F72488 *h=o->holder;
    if(h!=0) {
        Iface_82F72488 *p=h->obj;
        if(p!=0) return p->vt->get(p,fallback);
    }
    return fallback;
}

// Kinect Sports retail 4D5308C9, function 0x82F72458 (48 bytes).
typedef struct Iface_82F72458 Iface_82F72458;
typedef struct {
    int (*f[2])(Iface_82F72458 *self);
} Vtbl_82F72458;
struct Iface_82F72458 { Vtbl_82F72458 *vt; };
typedef struct { Iface_82F72458 *obj; } Holder_82F72458;
typedef struct { int pad0; Holder_82F72458 *holder; } Obj_82F72458;

int fn_82F72458(Obj_82F72458 *o)
{
    Holder_82F72458 *h = o->holder;
    if (h != 0) {
        Iface_82F72458 *p = h->obj;
        if (p != 0) {
            return p->vt->f[1](p);
        }
    }
    return 0;
}

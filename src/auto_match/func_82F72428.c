// Kinect Sports retail 4D5308C9, function 0x82F72428 (48 bytes).
typedef struct Iface_82F72428 Iface_82F72428;
typedef struct {
    int (*f[2])(Iface_82F72428 *self);
} Vtbl_82F72428;
struct Iface_82F72428 { Vtbl_82F72428 *vt; };
typedef struct { Iface_82F72428 *obj; } Holder_82F72428;
typedef struct { int pad0; Holder_82F72428 *holder; } Obj_82F72428;

int fn_82F72428(Obj_82F72428 *o)
{
    Holder_82F72428 *h = o->holder;
    if (h != 0) {
        Iface_82F72428 *p = h->obj;
        if (p != 0) {
            return p->vt->f[0](p);
        }
    }
    return 0;
}

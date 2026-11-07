typedef struct Obj_82F5B310 Obj_82F5B310;

typedef struct Vtbl_82F5B310 {
    void *slots[6];
    void (*method18)(Obj_82F5B310 *self);
} Vtbl_82F5B310;

struct Obj_82F5B310 {
    Vtbl_82F5B310 *vt;
};

typedef struct Holder_82F5B310 {
    Obj_82F5B310 *obj;
    void *other;
} Holder_82F5B310;

unsigned char fn_82F5B310(Holder_82F5B310 *h)
{
    unsigned char ok = h->other != 0 && h->obj != 0;
    if (!ok) {
        return 0;
    }
    h->obj->vt->method18(h->obj);
    return 1;
}

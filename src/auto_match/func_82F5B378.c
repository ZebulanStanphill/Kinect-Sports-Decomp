// Kinect Sports retail 4D5308C9, function 0x82F5B378 (72 bytes).
// Holder {object, owner}: if both are set, forwards to the object's vtable slot 5,
// otherwise returns E_FAIL. Same shape as fn_82F5B5A8.

typedef struct Obj_82F5B378 Obj_82F5B378;
typedef struct {
    void *slots[5];
    int (*f)(Obj_82F5B378 *o);
} Vtbl_82F5B378;
struct Obj_82F5B378 {
    Vtbl_82F5B378 *vt;
};
typedef struct {
    Obj_82F5B378 *o;
    void *p;
} Holder_82F5B378;

int fn_82F5B378(Holder_82F5B378 *s)
{
    if (!(unsigned char)(s->p && s->o))
        return 0x80004005;
    return s->o->vt->f(s->o);
}

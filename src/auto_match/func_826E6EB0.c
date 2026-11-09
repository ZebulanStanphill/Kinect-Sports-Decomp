typedef struct Iface_826E6EB0 Iface_826E6EB0;
typedef struct Vtbl_826E6EB0 {
  void *slot0;
  int (*get)(Iface_826E6EB0 *self);
} Vtbl_826E6EB0;
struct Iface_826E6EB0 { Vtbl_826E6EB0 *vt; };

typedef struct Holder_826E6EB0 { Iface_826E6EB0 *obj; } Holder_826E6EB0;
typedef struct Obj_826E6EB0 { int pad0; int pad4; Holder_826E6EB0 *holder; } Obj_826E6EB0;

int fn_826E6EB0(Obj_826E6EB0 *o)
{
  Holder_826E6EB0 *h = o->holder;
  if (h != 0) {
    Iface_826E6EB0 *p = h->obj;
    return p->vt->get(p);
  }
  return 0;
}

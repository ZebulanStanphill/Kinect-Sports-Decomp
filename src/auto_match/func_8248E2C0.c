extern void fn_822315A0(void *rc);

typedef struct Iface Iface;
typedef struct IfaceVtbl {
  int (*f0)(Iface *self, void *arg);
} IfaceVtbl;
struct Iface { IfaceVtbl *vtbl; };

typedef struct Ptr {
  void *ptr;
  void *rc;
} Ptr;

typedef struct Holder {
  Iface *obj;
  void *rc;
} Holder;

int fn_8248E2C0(Holder *h, Ptr *p)
{
  int r = h->obj->vtbl->f0(h->obj, p->ptr);
  if (h->rc != 0) {
    fn_822315A0(h->rc);
  }
  if (p->rc != 0) {
    fn_822315A0(p->rc);
  }
  return r;
}

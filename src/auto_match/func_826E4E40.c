typedef struct Iface Iface;
typedef struct {
  void *f0;
  void (*f4)(Iface *);
  void (*Release)(Iface *, void *);
} IfaceVtbl;
struct Iface { IfaceVtbl *vtbl; };

typedef struct {
  void *vtbl;
  int f4;
  int f8;
  void *mem;
  Iface *obj;
  void *ctx;
} Obj;

extern void fn_8267C498(void *p);
extern char lbl_8200BD80[];

void fn_826E4E40(Obj *o)
{
  Iface *p = o->obj;
  if (p != 0) {
    p->vtbl->Release(p, o->ctx);
  }
  if (o->mem != 0) {
    fn_8267C498(o->mem);
  }
  o->vtbl = lbl_8200BD80;
}

typedef struct Iface_83032BE0 Iface_83032BE0;
typedef struct { void *f0; void (*f4)(Iface_83032BE0 *); void (*f8)(Iface_83032BE0 *); } Vt_83032BE0;
struct Iface_83032BE0 { Vt_83032BE0 *vt; };
typedef struct { Iface_83032BE0 *a; Iface_83032BE0 *b; } Obj_83032BE0;

void fn_83032BE0(Obj_83032BE0 *o)
{
  if (o->b != 0) {
    o->b->vt->f4(o->b);
    o->b = 0;
  }
  if (o->a != 0) {
    o->a->vt->f8(o->a);
    o->a = 0;
  }
}

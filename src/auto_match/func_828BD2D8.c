typedef struct Iface Iface;
typedef struct IfaceVt {
  void *pad[4];
  float *(*f10)(Iface *);
  float *(*f14)(Iface *);
} IfaceVt;
struct Iface { IfaceVt *vt; };
typedef struct Obj_828BD2D8 {
  char pad[0xc];
  float dflt;
  char pad2[0x10];
  Iface *src;
} Obj;
extern int fn_8240D928(int);

float fn_828BD2D8(Obj *o, int idx)
{
  float *base;
  if (o->src != 0 && o->src->vt->f10(o->src) != 0) {
    if (o->src != 0) base = o->src->vt->f10(o->src); else base = 0;
    return base[fn_8240D928(idx) + 4];
  }
  if (o->src != 0 && o->src->vt->f14(o->src) != 0) {
    if (o->src != 0) base = o->src->vt->f14(o->src); else base = 0;
    return base[fn_8240D928(idx) + 5];
  }
  return o->dflt;
}

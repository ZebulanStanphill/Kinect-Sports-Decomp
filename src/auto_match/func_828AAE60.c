typedef struct Iface Iface;
typedef struct IfaceVt {
  void *pad[4];
  int *(*f10)(Iface *);
  int *(*f14)(Iface *);
} IfaceVt;
struct Iface { IfaceVt *vt; };
typedef struct Obj_828AAE60 {
  char pad[0xc];
  unsigned char dflt;
  char pad2[0x10];
  Iface *src;
} Obj;
extern int fn_8240D928(int);

unsigned char fn_828AAE60(Obj *o, int idx)
{
  int *base;
  if (o->src != 0 && o->src->vt->f10(o->src) != 0) {
    if (o->src != 0) base = o->src->vt->f10(o->src); else base = 0;
    return *(unsigned char *)&base[fn_8240D928(idx) + 4];
  }
  if (o->src != 0 && o->src->vt->f14(o->src) != 0) {
    if (o->src != 0) base = o->src->vt->f14(o->src); else base = 0;
    return *(unsigned char *)&base[fn_8240D928(idx) + 5];
  }
  return o->dflt;
}

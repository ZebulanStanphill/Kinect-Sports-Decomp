struct Obj_82935158;
typedef struct VT_82935158 { int f0; struct Obj_82935158 *(*f4)(void *self); } VT_82935158;
typedef struct Sub_82935158 { VT_82935158 *vt; } Sub_82935158;
typedef struct Obj_82935158 {
  char pad[0x10]; int f10, f14, f18, f1c, f20, f24; Sub_82935158 *f28;
} Obj_82935158;
extern void *fn_82930318(unsigned n);
extern Obj_82935158 *fn_82935088(void *p);

Obj_82935158 *fn_82935158(Obj_82935158 *src)
{
  void *m = fn_82930318(0x2c);
  Obj_82935158 *n;
  if (m != 0) n = fn_82935088(m);
  else n = 0;
  if (n == 0) return 0;
  n->f10 = src->f10;
  n->f14 = src->f14;
  n->f18 = src->f18;
  n->f1c = src->f1c;
  n->f20 = src->f20;
  n->f24 = src->f24;
  if (src->f28 != 0) {
    n->f28 = (Sub_82935158 *)src->f28->vt->f4(src->f28);
    if (n->f28 == 0) return 0;
  }
  return n;
}

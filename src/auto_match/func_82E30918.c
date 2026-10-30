typedef struct Com_82E30918 Com_82E30918;
typedef struct CVT_82E30918 { void *s0; void *s4; void (*f8)(Com_82E30918 *); } CVT_82E30918;
struct Com_82E30918 { CVT_82E30918 *vt; };
typedef struct Src_82E30918 Src_82E30918;
typedef struct SVT_82E30918 { void *s[42]; int (*fa8)(Src_82E30918 *, Com_82E30918 **); } SVT_82E30918;
struct Src_82E30918 { SVT_82E30918 *vt; };
typedef struct Obj_82E30918 { char pad[0x54]; int cs[1]; } Obj_82E30918;
extern int fn_82E30238(Obj_82E30918 *o, Com_82E30918 *c);
extern void fn_82E50CB8(void *cs);
extern void fn_82E50F10(void *cs);

int fn_82E30918(Obj_82E30918 *o, Src_82E30918 *src)
{
  int hr;
  Com_82E30918 *c = 0;
  if (src == 0) return (int)0x80070057;
  fn_82E50CB8(o->cs);
  hr = src->vt->fa8(src, &c);
  if (hr >= 0) {
    hr = fn_82E30238(o, c);
    c = (Com_82E30918 *)((hr >> 31) & (unsigned int)c);
  }
  if (c != 0) {
    c->vt->f8(c);
    c = 0;
  }
  fn_82E50F10(o->cs);
  return hr;
}

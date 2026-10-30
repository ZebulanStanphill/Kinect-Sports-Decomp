extern int fn_82F33E60(void *p);
extern void fn_82E4FE40(void *p);

typedef struct Ref_82F33F20 Ref_82F33F20;
typedef struct { void *pad[2]; void (*release)(Ref_82F33F20 *); } VT_82F33F20;
struct Ref_82F33F20 { VT_82F33F20 *vt; };

typedef struct {
  char pad0[2];
  unsigned short flags;
  char pad1[4];
  unsigned int f8;
  unsigned int fc;
} Obj_82F33F20;

int fn_82F33F20(Obj_82F33F20 *p)
{
  if (p != 0) {
    if (p->f8 > 0) {
      return 0x8002000d;
    }
    if (p->fc != 0) {
      int hr = fn_82F33E60(p);
      if (hr < 0) return hr;
    }
    if ((p->flags & 0x20) != 0) {
      Ref_82F33F20 *r = ((Ref_82F33F20 **)p)[-1];
      if (r != 0) {
        r->vt->release(r);
        ((Ref_82F33F20 **)p)[-1] = 0;
      }
    }
    if ((p->flags & 7) == 0 || (p->flags & 0x1000) != 0) {
      void *b = (char *)p - 0x10;
      if (b != 0) fn_82E4FE40(b);
    }
  }
  return 0;
}

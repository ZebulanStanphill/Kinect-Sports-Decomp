extern void fn_827977F8(void *o);
extern int fn_826BCDE8(int a);
extern void fn_827999F0(void *o, int a, int b, int c, int d, int e, int f, int g, int h);

typedef struct Obj_82799F60 Obj_82799F60;
typedef struct { void *pad; void (*f4)(Obj_82799F60 *, int); } VT_82799F60;
struct Obj_82799F60 {
  VT_82799F60 *vt;
  int pad4;
  void *sub;
  char pad[0x131];
  unsigned char flags;
};

void fn_82799F60(Obj_82799F60 *p, int a, int b, int c, int d, int e, int f, int g)
{
  fn_827977F8(p->sub);
  if (b == -1) {
    b = fn_826BCDE8(a);
  }
  fn_827999F0(p->sub, a, b, d, (p->flags >> 2) & 1, c, e, f, g);
  p->vt->f4(p, 0x106);
}

typedef struct Vec { int a, b, c; } Vec;
typedef struct P { void *vt; char pad[0x4c]; void *vt50; char pad2[0x2c]; int x80; Vec v; } P;
extern void fn_828BDDA0(P *p);
extern char lbl_82025BB0[], lbl_82025BAC[];
static void vinit(Vec *q) { q->a = 0; q->b = 0; q->c = 0; }
P *fn_828DB600(P *p, int a)
{
  fn_828BDDA0(p); p->x80 = a; p->vt = lbl_82025BB0; p->vt50 = lbl_82025BAC; { Vec *q = &p->v; q->a = 0; q->b = 0; q->c = 0; }
  return p;
}

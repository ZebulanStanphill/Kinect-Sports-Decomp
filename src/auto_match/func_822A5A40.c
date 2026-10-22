typedef struct Obj Obj;
typedef void (*VFn)(Obj *, int);
struct Obj { VFn *vt; };
typedef struct {
  char pad0[0x504];
  int flag504;
  char pad1[0x550 - 0x508];
  Obj *o550;
  char pad2[0x5bc - 0x554];
  int v5bc;
  Obj *o5c0;
  void *p5c4;
  char pad3[0x5d0 - 0x5c8];
  Obj *o5d0;
} Self;
extern void fn_822709D0(Obj *o);
extern void fn_82286E18(void *p, int x);
extern void fn_822A7B50(Self *p);
void fn_822A5A40(Self *p)
{
  Obj **pp = &p->o550;
  if (p->flag504 != 0) {
    fn_822709D0(p->o550);
    p->flag504 = 0;
  }
  p->o550->vt[0x54 / 4](p->o550, p->v5bc);
  p->v5bc = 0;
  if (p->o5c0 != 0)
    p->o5c0->vt[0](p->o5c0, 1);
  p->o5c0 = 0;
  if (p->o5d0 != 0)
    p->o5d0->vt[0](p->o5d0, 1);
  p->o5d0 = 0;
  ((void (*)(Obj *))(*pp)->vt[2])(*pp);
  if (p->o550 != 0)
    p->o550->vt[0](p->o550, 1);
  p->o550 = 0;
  if (p->p5c4 != 0)
    fn_82286E18(p->p5c4, 1);
  p->p5c4 = 0;
  fn_822A7B50(p);
}

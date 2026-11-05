extern void *fn_8267B890(int, int, int);
extern void fn_82758A28(void *);
extern void fn_827AF4D0(void *);
typedef struct { void *f[0x100]; } VT;
typedef struct Obj_82757D58 { VT *vt; int pad[0x54]; unsigned f154; } Obj_82757D58;

unsigned fn_82757D58(Obj_82757D58 *p)
{
  void *q;
  void **a;
  void **b;
  unsigned r;

  if (p->f154 == 0) {
    a = (*(void **(**)(Obj_82757D58 *))((char *)p->vt + 0x40))(p);
    r = (*(unsigned (**)(void **))((char *)*a + 0xd8))(a);
    q = fn_8267B890(r, 0xa4, 0);
    if (q != 0) {
      fn_827AF4D0(q);
      fn_82758A28((char *)q + 0x1c);
    } else {
      q = 0;
    }
    p->f154 = (unsigned)q;
  }
  return p->f154;
}

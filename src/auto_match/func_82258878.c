extern void fn_8289D4C0(void *);
extern void fn_82232BC0(void *);
extern int lbl_821983A0, lbl_82198348;

typedef struct { int *vt; } Sub;
typedef struct { int *vt; int pad[0x273 - 1]; Sub sub; } S;

static void Sub_dtor(Sub *s)
{
  s->vt = &lbl_82198348;
  fn_8289D4C0(s);
}

void fn_82258878(S *p)
{
  p->vt = &lbl_821983A0;
  Sub_dtor(&p->sub);
  fn_82232BC0(p);
}

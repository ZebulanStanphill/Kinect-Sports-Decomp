extern void fn_82897D88(void *);
extern void fn_82232AE8(void *);
extern int lbl_821983B0, lbl_82198390;

typedef struct { int *vt; } Sub;
typedef struct { int *vt; int pad[0x29b - 1]; Sub sub; } S;

static void Sub_dtor(Sub *s)
{
  s->vt = &lbl_82198390;
  fn_82897D88(s);
}

void fn_82258828(S *p)
{
  p->vt = &lbl_821983B0;
  Sub_dtor(&p->sub);
  fn_82232AE8(p);
}

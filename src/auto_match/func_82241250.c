extern void fn_82897D88(void *);
extern void fn_82233720(void *);
extern int lbl_82197400, lbl_821973E0;

typedef struct { int *vt; } Sub;
typedef struct { int *vt; int pad[0x83 - 1]; Sub sub; } S;

static void Sub_dtor(Sub *s)
{
  s->vt = &lbl_821973E0;
  fn_82897D88(s);
}

void fn_82241250(S *p)
{
  p->vt = &lbl_82197400;
  Sub_dtor(&p->sub);
  fn_82233720(p);
}

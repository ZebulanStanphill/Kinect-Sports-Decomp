extern void fn_8289D4C0(void *);
extern void fn_82233888(void *);
extern int lbl_821973F0, lbl_821980D0;

typedef struct { int *vt; } Sub;
typedef struct { int *vt; int pad[0x7b - 1]; Sub sub; } S;

static void Sub_dtor(Sub *s)
{
  s->vt = &lbl_821980D0;
  fn_8289D4C0(s);
}

void fn_822412A0(S *p)
{
  p->vt = &lbl_821973F0;
  Sub_dtor(&p->sub);
  fn_82233888(p);
}

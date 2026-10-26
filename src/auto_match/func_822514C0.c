extern void fn_82897D88(void *);
extern void fn_82233720(void *);
extern int lbl_8219803C, lbl_82197534;

typedef struct { int *vt; } Sub;
typedef struct { int *vt; int pad[0x83 - 1]; Sub sub; } S;

static void Sub_dtor(Sub *s)
{
  s->vt = &lbl_82197534;
  fn_82897D88(s);
}

void fn_822514C0(S *p)
{
  p->vt = &lbl_8219803C;
  Sub_dtor(&p->sub);
  fn_82233720(p);
}

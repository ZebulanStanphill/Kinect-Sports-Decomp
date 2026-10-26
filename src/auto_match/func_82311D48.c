extern void fn_823D9FC0(void *);
extern int lbl_821AF1C8, lbl_821AF47C, lbl_821B6A4C;

typedef struct { int *vt; int x[7]; } Sub;
typedef struct { int *vt; int pad[7]; Sub sub; } S;

static void Sub_dtor(Sub *s)
{
  s->vt = &lbl_821B6A4C;
  fn_823D9FC0(s);
}

void fn_82311D48(S *p)
{
  p->vt = &lbl_821AF47C;
  Sub_dtor(&p->sub);
  p->vt = &lbl_821AF1C8;
}

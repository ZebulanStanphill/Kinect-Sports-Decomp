typedef struct {
  void *vt;
  int type;
  int b;
  int c[10];
} S;
extern int lbl_8202F17C;

void fn_82932B38(S *p)
{
  p->vt = &lbl_8202F17C;
  p->type = 0xc;
  p->b = 0;
  p->c[0] = 0; p->c[1] = 0; p->c[2] = 0; p->c[3] = 0; p->c[4] = 0;
  p->c[5] = 0; p->c[6] = 0; p->c[7] = 0; p->c[8] = 0; p->c[9] = 0;
}

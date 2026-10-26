typedef struct {
  void *vt;
  int type;
  int b;
  int c;
  int d[6];
  int m;
  int x, y;
} S;
extern int lbl_8202F110;

void fn_82930FC0(S *p, int a, int b, int c, int d, int e)
{
  p->d[2] = c;
  p->d[0] = a;
  p->d[1] = b;
  p->vt = &lbl_8202F110;
  p->type = 6;
  p->b = 0;
  p->c = 0;
  p->d[3] = d;
  p->d[4] = e;
  p->d[5] = 0;
  p->m = -1;
  p->x = 0;
  p->y = 0;
}

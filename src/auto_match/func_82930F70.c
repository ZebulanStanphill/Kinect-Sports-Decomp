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

void fn_82930F70(S *p)
{
  p->vt = &lbl_8202F110;
  p->type = 6;
  p->b = 0;
  p->c = 0;
  p->d[0] = 0; p->d[1] = 0; p->d[2] = 0; p->d[3] = 0; p->d[4] = 0; p->d[5] = 0;
  p->m = -1;
  p->x = 0;
  p->y = 0;
}

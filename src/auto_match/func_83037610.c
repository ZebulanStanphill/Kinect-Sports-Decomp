extern int lbl_8217D040;

typedef struct { int *vt; int v[3]; unsigned char flag; } S;

void fn_83037610(S *p)
{
  int i;

  p->flag = 0;
  p->vt = &lbl_8217D040;
  for (i = 0; i < 3; i++) {
    p->v[i] = 0;
  }
}

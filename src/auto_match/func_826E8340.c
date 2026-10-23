extern int fn_8268C3A8();
extern int fn_826E76C8();
extern unsigned int lbl_8200D6D0;
typedef struct S { void *vt; int pad[3]; int x10; int x14; int sub[9]; int *buf; int cap; int data[1]; } S;

S *fn_826E8340(S *p, int a, int b, int c, int d)
{
  int *q = &p->x10;
  p->vt = &lbl_8200D6D0;
  *q = 0;
  fn_8268C3A8(p->sub, b);
  p->buf = p->data;
  p->cap = 0x200;
  fn_826E76C8(p, a, c, d);
  return p;
}

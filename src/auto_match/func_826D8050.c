extern int fn_82765CA0();
extern unsigned int lbl_8200C5B8;


typedef struct Obj_826D8050 { void *vt; int a; int b; int c; char arr[1]; } Obj_826D8050;
extern int fn_82765CA0(void *, int);

Obj_826D8050 *fn_826D8050(Obj_826D8050 *p)
{
  int *q = &p->a;
  q[0] = 1;
  q[1] = 0;
  q[2] = 0x40000;
  p->vt = &lbl_8200C5B8;
  fn_82765CA0(p->arr, 0x1ff8);
  return p;
}

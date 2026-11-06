extern void fn_83008328(void *, int);
extern char lbl_8217C7C0[];

typedef struct Obj_8302B7D0 {
  void *vtbl;
  int f4;
  int f8;
  int fC;
  int f10;
  unsigned a : 24;
  unsigned b : 6;
  unsigned c : 2;
  int f18;
} Obj_8302B7D0;

Obj_8302B7D0 *fn_8302B7D0(Obj_8302B7D0 *param_1, int param_2, int param_3)
{
  fn_83008328(param_1, param_3);
  param_1->f10 = 0;
  param_1->vtbl = lbl_8217C7C0;
  param_1->f18 = 0;
  param_1->a = param_2;
  param_1->b = 8;
  return param_1;
}

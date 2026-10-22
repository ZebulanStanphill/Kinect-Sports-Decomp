extern int fn_82BE8CF8();
extern int fn_82BE8D50();
extern int fn_82BECBA0();
extern int fn_82BF6CA8();
extern int fn_82BF6CE8();
extern int fn_82BF7428();
extern char lbl_820EB0C8[];
extern int (*lbl_831751CC)(void *);

typedef struct {
  void *vtbl;
  int f4;
  void *handle;
  int f0c[8];
  int f2c[8];
  char *f4c;
} Obj;

void fn_82BED180(Obj *param_1)
{
  char *p;

  param_1->vtbl = lbl_820EB0C8;
  if (param_1->handle != 0) {
    lbl_831751CC(param_1->handle);
    param_1->handle = 0;
  }
  p = param_1->f4c;
  if (p != 0) {
    fn_82BE8D50(p + *(int *)(*(int *)(p + 4) + 4) + 4);
  }
  fn_82BF6CA8(param_1->f2c);
  fn_82BECBA0(param_1);
  fn_82BF6CE8(param_1->f2c);
  fn_82BF7428(param_1->f0c);
  fn_82BE8CF8(param_1);
}

extern int fn_82BE8CF8();
extern char lbl_820EBC04[];
extern void (*lbl_831751CC)(void *);

void fn_82BF6DD8(int *param_1)
{
  void *p;

  *param_1 = (int)lbl_820EBC04;
  p = (void *)param_1[2];
  if (p != 0) {
    lbl_831751CC(p);
    param_1[2] = 0;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_82BE8CF8(param_1);
}

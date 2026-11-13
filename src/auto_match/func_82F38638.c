extern int fn_82F37588();
extern int fn_82F380A0();
extern int fn_82F38430();
extern unsigned int lbl_82162BB0;
extern unsigned int lbl_82162BB8;


void fn_82F38638(unsigned int *param_1)

{
  *param_1 = &lbl_82162BB8;
  fn_82F380A0(param_1,0xffffffff8202e618);
  fn_82F38430(param_1);
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(int (***)())(*(int *)param_1[0x1d] + 8))();
    param_1[0x1d] = 0;
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(int (***)())(*(int *)param_1[0x22] + 8))();
    param_1[0x22] = 0;
  }
  param_1[0x23] = &lbl_82162BB0;
  if (param_1[0x24] == 0) {
    fn_82F37588(param_1 + 0x23,0);
  }
  param_1[2] = &lbl_82162BB0;
  if (param_1[3] == 0) {
    fn_82F37588(param_1 + 2,0);
  }
  return;
}


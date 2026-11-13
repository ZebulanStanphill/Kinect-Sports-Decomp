extern int fn_82BE8D50();
extern int fn_82BF3FA8();


void fn_82BF7AB8(unsigned int *param_1)

{
  int iVar1;
  
  if (param_1[4] != 0) {
    fn_82BE8D50(param_1[4]);
  }
  iVar1 = (*(int (**)())(*param_1 + 0x28))(param_1);
  param_1[4] = iVar1;
  fn_82BF3FA8();
  return;
}


extern int fn_82791CF0();
extern int fn_82791DF0();


void fn_82791E88(int param_1,int param_2)

{
  int iVar1;
  
  while ((*(unsigned int *)(param_1 + 0x20) < *(unsigned int *)(*(int *)(param_1 + 0x1c) + 4) &&
         (iVar1 = fn_82791CF0(param_1), *(int *)(iVar1 + 4) < param_2))) {
    fn_82791DF0(param_1);
  }
  return;
}


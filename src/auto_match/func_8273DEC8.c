typedef unsigned char bool;
extern int fn_8273D528();


void fn_8273DEC8(int param_1)

{
  int iVar1;
  
  fn_8273D528(param_1 + 0x10,(unsigned __int64)*(unsigned int *)(param_1 + 0x14) - 1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x10) + -4);
  iVar1 = (*(int (**)())(*(int *)(iVar1 + 0x10) + 8))(iVar1 + 0x10);
  *(bool *)(param_1 + 0x1c) = iVar1 == 7;
  return;
}


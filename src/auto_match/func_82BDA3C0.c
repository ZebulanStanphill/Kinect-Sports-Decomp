void fn_82BDA3C0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_2 + 9) * 4;
  if (param_3 != *(int *)(iVar1 + param_1)) {
    *(int *)(iVar1 + param_1) = param_3;
    *(unsigned int *)(*(int *)(param_1 + 8) + 0x114) = 1;
  }
  fn_82BD9BA0();
  return;
}

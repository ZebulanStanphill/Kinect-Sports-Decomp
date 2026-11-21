void fn_82E4BC88(int param_1,unsigned int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x230) + 0x10);
  if ((iVar1 != 0) && (param_3 <= iVar1 + -1)) {
    if ((-1 < param_3) || (*(int *)(param_1 + 0x238) == iVar1)) {
      *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + -1;
    }
    fn_82E914C0();
    return;
  }
  *param_2 = 0;
  return;
}

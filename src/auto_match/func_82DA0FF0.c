void fn_82DA0FF0(int param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  param_3[1] = iVar1 * 6;
  *param_3 = iVar1 * 0x40 + (iVar1 + 3U & 0xfffffffc);
  return;
}


void fn_82E01058(int param_1,int param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned short uVar1;
  int iVar2;
  
  uVar1 = *(unsigned short *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0xc);
  *param_4 = param_2;
  param_2 = (unsigned int)uVar1 * 0x50 + param_2;
  param_4[1] = param_2;
  param_2 = param_2 + (unsigned int)uVar1 * 0x60;
  param_4[2] = param_2;
  param_4[3] = (iVar2 + 0xfU & 0xfffffff0) + param_2;
  return;
}


extern unsigned int lbl_8215F67C;
extern unsigned int lbl_8215F68C;


void fn_82E86EF8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&lbl_8215F68C + param_2 * 4);
  *(int *)(param_1 + 0xa24) = iVar1;
  iVar2 = 1 << (iVar1 - 1U & 0x3f);
  iVar1 = *(int *)(&lbl_8215F67C + param_2 * 4);
  *(int *)(param_1 + 0xa2c) = iVar2;
  *(int *)(param_1 + 0x1aec) = iVar2 >> 2;
  *(int *)(param_1 + 0xa34) = iVar2 * 2 + -1;
  *(int *)(param_1 + 0xa28) = iVar1;
  iVar1 = 1 << (iVar1 - 1U & 0x3f);
  *(int *)(param_1 + 0xa30) = iVar1;
  *(int *)(param_1 + 0x1af0) = iVar1 >> 2;
  *(int *)(param_1 + 0x1af4) = iVar2 >> 3;
  *(int *)(param_1 + 0xa38) = iVar1 * 2 + -1;
  *(int *)(param_1 + 0x1af8) = iVar1 >> 3;
  return;
}


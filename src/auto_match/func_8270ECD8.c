void fn_8270ECD8(int param_1,int param_2,unsigned char param_3,unsigned char param_4)

{
  unsigned int uVar1;
  int iVar2;
  
  if (param_2 < 0) {
    return;
  }
  if (0xe4 < param_2) {
    return;
  }
  iVar2 = (param_2 >> 3) + param_1;
  *(unsigned char *)(iVar2 + 0x658) =
       *(unsigned char *)(iVar2 + 0x658) & ~(unsigned char)(1 << (param_2 + (param_2 >> 3) * -8 & 0x3fU));
  iVar2 = param_1 + 0xc;
  if (99 < *(unsigned int *)(param_1 + 0x654)) {
    return;
  }
  *(short *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2 + 4) = (short)param_2;
  *(unsigned char *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2 + 0xc) = param_3;
  *(unsigned int *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2 + 8) = 6;
  *(unsigned char *)(*(int *)(param_1 + 0x64c) * 0x10 + iVar2 + 0xd) = param_4;
  uVar1 = *(int *)(param_1 + 0x64c) + 1;
  *(unsigned int *)(param_1 + 0x64c) = uVar1;
  if (99 < uVar1) {
    *(unsigned int *)(param_1 + 0x64c) = 0;
  }
  *(int *)(param_1 + 0x654) = *(int *)(param_1 + 0x654) + 1;
  return;
}


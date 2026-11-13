void fn_82D92F30(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    return;
  }
  iVar4 = *param_3;
  if (*param_3 < *(int *)(param_1 + 8)) {
    iVar4 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 8) = iVar4;
  if (iVar4 <= param_3[1]) {
    iVar4 = param_3[1];
  }
  *(int *)(param_1 + 8) = iVar4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3[1];
  *(int *)(param_1 + 0x10) = param_3[2] + *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3[3];
  iVar4 = *(int *)(param_2 + 0x30);
  iVar1 = param_3[3];
  iVar2 = param_3[2];
  *(short *)(iVar4 + 0x14) = *(short *)(iVar4 + 0x14) + (short)param_3[1];
  *(short *)(iVar4 + 0x16) = *(short *)(iVar4 + 0x16) + (short)iVar2;
  *(short *)(iVar4 + 0x18) = *(short *)(iVar4 + 0x18) + (short)iVar1;
  uVar3 = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x30) + 0x14);
  uVar5 = *(unsigned int *)(param_1 + 8);
  if ((int)*(unsigned int *)(param_1 + 8) <= (int)uVar3) {
    uVar5 = uVar3;
  }
  *(unsigned int *)(param_1 + 8) = uVar5;
  return;
}


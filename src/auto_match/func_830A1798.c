void fn_830A1798(int param_1,unsigned int param_2,unsigned char param_3,int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar1 = *param_4;
  uVar2 = *(unsigned int *)(param_1 + 0x54);
  uVar3 = *(unsigned int *)(param_1 + 0x50);
  uVar4 = *(unsigned int *)(param_1 + 0x48);
  *(unsigned char *)(iVar1 + 3) = 1;
  *(short *)(iVar1 + 6) = (short)uVar2;
  *(short *)(iVar1 + 4) = (short)uVar3;
  *(unsigned int *)(iVar1 + 8) = param_2;
  *(unsigned int *)(iVar1 + 0xc) = uVar4;
  *(unsigned char *)(iVar1 + 1) = param_3;
  *param_4 = iVar1 + 0x10;
  return;
}


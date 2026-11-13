extern int fn_82F68CC0();


unsigned __int64 fn_82CE28C0(int param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  fn_82F68CC0(param_1,param_2,0x2c);
  iVar3 = (int)param_2 + 0x2c;
  if ((*(unsigned int *)(param_1 + 8) & 1) == 0) {
    uVar1 = *(unsigned short *)(param_1 + 0x26);
    if (uVar1 != 0) {
      *(int *)(param_1 + 0x3c) = iVar3;
      iVar3 = (unsigned int)uVar1 + iVar3;
    }
    uVar2 = *(unsigned short *)(param_1 + 0x28);
    *(int *)(param_1 + 0x2c) = iVar3;
    iVar4 = (unsigned int)*(unsigned short *)(param_1 + 0x2a) * (unsigned int)uVar2;
    iVar3 = (unsigned int)uVar2 * 4 + iVar3;
    *(int *)(param_1 + 0x30) = iVar3;
    iVar3 = iVar4 + iVar3;
    iVar4 = (((*(int *)(param_1 + 0x14) + (unsigned int)uVar2 * -4) - (unsigned int)uVar1) - iVar4) + -0x2c;
    *(int *)(param_1 + 0x34) = iVar3;
    *(int *)(param_1 + 0x38) = iVar4;
    iVar4 = iVar4 + iVar3;
    *(int *)(param_1 + 0x40) = iVar4;
    iVar4 = (unsigned int)*(unsigned short *)(param_1 + 0x1a) * (unsigned int)*(unsigned short *)(param_1 + 0x18) + iVar4;
    *(int *)(param_1 + 0x44) = iVar4;
    *(unsigned int *)(param_1 + 0x48) = (unsigned int)*(unsigned short *)(param_1 + 0x20) * 2 + iVar4;
  }
  else {
    uVar5 = 0xffffffff80004005;
  }
  return uVar5;
}


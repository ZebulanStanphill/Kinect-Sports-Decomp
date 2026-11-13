extern int fn_8304D6C8();


unsigned __int64 fn_83048088(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  short sVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  
  uVar1 = *(unsigned short *)(param_1 + 0x3c);
  uVar7 = (unsigned int)uVar1 * *param_2;
  if (*(short *)(param_1 + 0x1c) == 1) {
    iVar6 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x30);
  }
  uVar4 = iVar6 - *(int *)(param_1 + 0x28);
  if (uVar4 < uVar7) {
    trapWord(6,(unsigned __int64)uVar1,0);
    *param_2 = uVar4 / uVar1;
    uVar7 = uVar4;
  }
  uVar3 = (unsigned __int64)*(unsigned short *)(param_1 + 0x3c);
  trapWord(6,uVar3,0);
  trapWord(6,uVar3,0);
  fn_8304D6C8(param_1,((unsigned __int64)*(unsigned int *)(param_1 + 0x28) -
                           (unsigned __int64)*(unsigned int *)(param_1 + 0x38) & 0xffffffff) / uVar3,*param_2,
                  *(unsigned int *)(param_1 + 0x34) / uVar3);
  iVar5 = *(int *)(param_1 + 0x28) + uVar7;
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 == iVar6) {
    sVar2 = *(short *)(param_1 + 0x1c);
    if (sVar2 == 1) {
      return 0x11;
    }
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x2c);
    if (sVar2 != 0) {
      *(short *)(param_1 + 0x1c) = sVar2 + -1;
      return 0x2d;
    }
  }
  return 0x2d;
}


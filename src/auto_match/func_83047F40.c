extern int fn_8304D650();


void fn_83047F40(int param_1,int *param_2)

{
  unsigned short uVar1;
  short sVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned short uVar6;
  int iVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  
  uVar6 = *(unsigned short *)(param_2 + 3);
  uVar1 = *(unsigned short *)(param_1 + 0x3c);
  uVar8 = (unsigned int)uVar6 * (unsigned int)uVar1;
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar3 = *(unsigned int *)(iVar5 + 0x24);
  if (*(short *)(param_1 + 0x1c) == 1) {
    iVar7 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x34);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x30);
  }
  uVar4 = iVar7 - *(int *)(param_1 + 0x28);
  if (uVar4 < uVar8) {
    trapWord(6,(unsigned __int64)uVar1,0);
    uVar6 = (unsigned short)(uVar4 / uVar1);
    uVar8 = uVar4;
  }
  *param_2 = *(int *)(param_1 + 0x28);
  *(unsigned short *)(param_2 + 3) = uVar6;
  *(unsigned short *)((int)param_2 + 0xe) = uVar6;
  param_2[1] = uVar3 >> 0xe;
  uVar9 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) - (unsigned __int64)*(unsigned int *)(param_1 + 0x38) & 0xffffffff)
          / (unsigned __int64)*(unsigned short *)(param_1 + 0x3c);
  trapWord(6,(unsigned __int64)*(unsigned short *)(param_1 + 0x3c),0);
  fn_8304D650(param_1,param_2,uVar9,0);
  if ((*(unsigned int *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
    iVar5 = *(int *)(iVar5 + 0x20);
    param_2[6] = (int)uVar9;
    param_2[9] = iVar5;
    trapWord(6,(unsigned __int64)*(unsigned short *)(param_1 + 0x3c),0);
    param_2[8] = *(unsigned int *)(param_1 + 0x34) / (unsigned int)*(unsigned short *)(param_1 + 0x3c);
  }
  iVar5 = *(int *)(param_1 + 0x28) + uVar8;
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 == iVar7) {
    sVar2 = *(short *)(param_1 + 0x1c);
    if (sVar2 == 1) {
      param_2[0xd0] = 0x11;
      return;
    }
    *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x2c);
    if (sVar2 != 0) {
      *(short *)(param_1 + 0x1c) = sVar2 + -1;
    }
  }
  param_2[0xd0] = 0x2d;
  return;
}


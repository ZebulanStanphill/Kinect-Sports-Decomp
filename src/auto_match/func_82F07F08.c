void fn_82F07F08(int param_1,int param_2,int param_3)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  short sVar4;
  short sVar5;
  unsigned int uVar6;
  int iVar7;
  
  uVar2 = *(unsigned int *)(param_1 + 0x5b4);
  uVar6 = 1;
  uVar3 = *(unsigned int *)(param_1 + 0x5b8);
  do {
    iVar7 = uVar6 * 2;
    sVar1 = *(short *)(iVar7 + param_2);
    if (sVar1 == 0) {
      *(unsigned short *)(iVar7 + param_3) = 0;
    }
    else {
      sVar4 = sVar1 * (short)uVar2;
      sVar5 = (short)uVar3;
      if (sVar1 < 0) {
        *(short *)(iVar7 + param_3) = sVar4 - sVar5;
      }
      else {
        *(short *)(iVar7 + param_3) = sVar4 + sVar5;
      }
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 0x40);
  return;
}


#define true 1


unsigned __int64 fn_82C1A158(int param_1,unsigned __int64 param_2,int param_3)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = *(int *)(param_3 + 0x38);
  iVar8 = 0;
  if (0 < *(short *)(param_3 + 0x76)) {
    iVar8 = *(int *)(param_1 + 0x10c) + -1;
    iVar9 = (int)*(short *)(param_3 + 0x76) >>
            ((int)(short)*(unsigned int *)(param_1 + 0x1c8) & 0x3fU);
    if (iVar8 <= iVar9) {
      iVar9 = iVar8;
    }
    uVar5 = (**(int (***)())(param_1 + 0x1e4))(param_2,param_3);
    if ((int)uVar5 < 0) goto LAB_82c1a300;
    sVar6 = *(short *)(param_1 + 0xca) + (short)*(unsigned int *)(param_1 + 0x10) + 1;
    iVar7 = (int)sVar6;
    *(short *)(param_1 + 0xca) = sVar6;
    sVar2 = sVar6;
    while (sVar2 < iVar9) {
      iVar4 = *(int *)(param_1 + 0x14);
      while( true ) {
        fVar1 = (float)(__int64)iVar4;
        if (*(int *)(param_1 + 0x18) != 0) {
          fVar1 = -fVar1;
        }
        *(float *)(iVar7 * 4 + iVar3) = fVar1;
        uVar5 = (**(int (***)())(param_1 + 0x1e4))(param_2,param_3);
        if ((int)uVar5 < 0) goto LAB_82c1a300;
        sVar6 = *(short *)(param_1 + 0xca) + (short)*(unsigned int *)(param_1 + 0x10) + 1;
        iVar7 = (int)sVar6;
        *(short *)(param_1 + 0xca) = sVar6;
        if (iVar9 <= sVar6) break;
        iVar4 = *(int *)(param_1 + 0x14);
      }
      sVar2 = *(short *)(param_1 + 0xca);
    }
    while (sVar6 < iVar8) {
      do {
        uVar5 = (**(int (***)())(param_1 + 0x1e4))(param_2,param_3);
        if ((int)uVar5 < 0) goto LAB_82c1a300;
        sVar6 = *(short *)(param_1 + 0xca) + (short)*(unsigned int *)(param_1 + 0x10) + 1;
        *(short *)(param_1 + 0xca) = sVar6;
      } while (sVar6 < iVar8);
    }
    if ((int)*(short *)(param_1 + 0xca) <= *(int *)(param_1 + 0x10c)) goto LAB_82c1a300;
  }
  uVar5 = 0xffffffff80040002;
LAB_82c1a300:
  if (*(short *)(param_1 + 0xca) == iVar8) {
    *(short *)(param_3 + 0x1ea) = (short)iVar8 + 1;
  }
  else {
    *(short *)(param_3 + 0x1ea) =
         *(short *)(param_1 + 0xca) - (short)*(unsigned int *)(param_1 + 0x10);
  }
  return uVar5;
}


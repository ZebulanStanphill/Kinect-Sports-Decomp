__int64 fn_82A6BD48(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  
  iVar3 = 0;
  iVar2 = 0;
  if ((2 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0xb0) == 0)) {
    uVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 0x22);
    if (*(unsigned short *)(param_1 + 0x22) != 0) {
      iVar4 = 0;
      do {
        psVar1 = *(short **)(*(int *)(iVar4 + *(int *)(param_1 + 0x140) + 0x1a8) + 8);
        iVar7 = (int)psVar1[-1];
        iVar5 = (int)*psVar1;
        if (*(int *)(param_1 + 0x1bc) == 0) {
          if (*(int *)(param_1 + 0x1c0) != 0) {
            iVar5 = iVar5 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
            iVar7 = iVar7 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
          }
        }
        else {
          iVar5 = iVar5 >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
          iVar7 = iVar7 >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
        }
        if (iVar2 < iVar7) {
          iVar2 = iVar7;
        }
        if (iVar3 < iVar5) {
          iVar3 = iVar5;
        }
        iVar4 = iVar4 + 0x6f0;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar8 = iVar2 + iVar3;
    return (__int64)((int)uVar8 >> 1) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 1) != 0);
  }
  return 0;
}


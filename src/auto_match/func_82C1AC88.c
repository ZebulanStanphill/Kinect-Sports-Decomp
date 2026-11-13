unsigned __int64 fn_82C1AC88(int param_1)

{
  short sVar1;
  short sVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x244)) {
    iVar5 = 0;
    do {
      sVar2 = *(short *)(iVar5 + *(int *)(param_1 + 0x248));
      iVar8 = sVar2 * 0x6f0 + *(int *)(param_1 + 0x140);
      if (*(int *)(param_1 + 0xb0) == 0) {
        if (*(int *)(param_1 + 0x1cc) == 0) {
          iVar6 = *(int *)(param_1 + 0x100);
          if (*(int *)(param_1 + 0x1c0) != 0) {
            iVar6 = iVar6 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0x100) >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
        }
        sVar1 = *(short *)(iVar8 + 0x74);
        uVar3 = iVar6 * 3;
        iVar7 = *(int *)(param_1 + 0x144);
        *(short *)(iVar8 + 0x74) = (short)*(unsigned int *)(iVar8 + 0x8c) + sVar1;
        iVar7 = ((((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0)) * (int)sVar2 +
                 (iVar6 >> 1) + (int)sVar1) * 4 + iVar7;
        *(int *)(iVar8 + 0x38) = iVar7;
        *(int *)(iVar8 + 0x90) = iVar7;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 2;
    } while (iVar4 < *(short *)(param_1 + 0x244));
  }
  return 0;
}


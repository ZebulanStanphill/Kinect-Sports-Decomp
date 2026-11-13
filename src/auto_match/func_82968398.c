extern int fn_829682A8();


unsigned __int64 fn_82968398(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  int iVar12;
  int *piVar13;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_3 * 4 + iVar1);
  uVar5 = *(unsigned int *)((param_4 * 4 + param_5) * 4 + *(int *)(param_2 + 0x1c));
  if (uVar5 != 0xffffffff) {
    uVar2 = *(unsigned int *)(iVar4 + 0x58);
    do {
      iVar6 = *(int *)(uVar5 * 4 + iVar1);
      if (*(unsigned int *)(iVar6 + 0x48) < uVar2) {
        if (*(unsigned int *)(iVar6 + 0x58) <= *(unsigned int *)(iVar4 + 0x48)) {
          return 0xffffffffffffffff;
        }
        if ((*(int *)(iVar4 + 0x14) == *(int *)(iVar6 + 0x14)) &&
           (*(int *)(iVar4 + 0x18) == *(int *)(iVar6 + 0x14))) {
          return (unsigned __int64)uVar5;
        }
        iVar9 = iVar6;
        iVar12 = iVar4;
        if (*(unsigned int *)(iVar4 + 0x48) < *(unsigned int *)(iVar6 + 0x48)) {
          iVar9 = iVar4;
          iVar12 = iVar6;
        }
        uVar11 = 0;
        iVar9 = *(int *)(iVar9 + 0x74) * 4;
        uVar7 = *(unsigned int *)(*(int *)(param_2 + 0x4c) + iVar9);
        piVar13 = (int *)(*(int *)(*(int *)(param_2 + 0x50) + iVar9) * 4 + *(int *)(param_2 + 0x54))
        ;
        if (uVar7 != 0) {
          iVar9 = *(int *)(param_2 + 0x58);
          uVar3 = *(unsigned int *)(iVar12 + 0x48);
          do {
            puVar10 = (unsigned int *)(*piVar13 * 0xc + iVar9);
            if (*puVar10 <= uVar3) break;
            iVar8 = fn_829682A8(param_1,*(unsigned int *)(iVar12 + 0x14),
                                  *(unsigned int *)(iVar12 + 0x18),puVar10[1],puVar10[2]);
            if (iVar8 == 0) {
              return (unsigned __int64)uVar5;
            }
            uVar11 = uVar11 + 1;
            piVar13 = piVar13 + 1;
          } while (uVar11 < uVar7);
        }
      }
      uVar5 = *(unsigned int *)(iVar6 + 0x30);
    } while (uVar5 != 0xffffffff);
  }
  return 0xffffffffffffffff;
}


extern int fn_82F68CC0();


unsigned __int64 fn_82C2AA40(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  short sVar9;
  int iVar8;
  int *piVar10;
  __int64 lVar11;
  __int64 lVar12;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  sVar9 = 0;
  piVar2 = *(int **)(iVar1 + 0x10);
  piVar10 = (int *)piVar2[1];
  if (piVar10 != (int *)0x0) {
    do {
      uVar7 = *(unsigned __int64 *)(*piVar10 + 8);
      uVar6 = *(unsigned int *)(*piVar10 + 4) + uVar7;
      if (uVar6 < param_2) break;
      if ((uVar7 <= param_2) && (param_2 < uVar6)) {
        sVar9 = sVar9 + 1;
        break;
      }
      piVar10 = (int *)piVar10[1];
      sVar9 = sVar9 + 1;
    } while (piVar10 != (int *)0x0);
    if ((sVar9 != 0) && (piVar10 != piVar2)) {
      do {
        if (piVar10 == (int *)0x0) {
          return 0;
        }
        puVar3 = (unsigned int *)*piVar10;
        uVar6 = *(unsigned __int64 *)(puVar3 + 2);
        uVar4 = puVar3[1];
        if ((uVar6 <= param_2) && (param_2 < uVar4 + uVar6)) {
          lVar11 = ((uVar6 & 0xffffffff) - (param_2 & 0xffffffff)) + (unsigned __int64)uVar4;
          lVar5 = (unsigned __int64)*(unsigned int *)(param_4 + 0x1c) - (unsigned __int64)*(unsigned int *)(param_4 + 0x18);
          lVar12 = lVar11;
          if ((int)lVar5 < (int)lVar11) {
            lVar12 = lVar5;
          }
          fn_82F68CC0((unsigned __int64)*(unsigned int *)(param_4 + 0x2c) + (unsigned __int64)*(unsigned int *)(param_4 + 0x18),
                       ((unsigned __int64)uVar4 - lVar11) + (unsigned __int64)*puVar3,lVar12);
          param_2 = (__int64)(int)lVar12 + param_2;
          iVar8 = *(int *)(param_4 + 0x18) + (int)lVar12;
          *(int *)(param_4 + 0x18) = iVar8;
          if (*(int *)(param_4 + 0x1c) == iVar8) {
            return 0;
          }
        }
        piVar10 = (int *)piVar10[2];
      } while (piVar10 != *(int **)(iVar1 + 0x10));
    }
  }
  return 0;
}


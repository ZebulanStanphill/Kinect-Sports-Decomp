extern int fn_82CE6310();
extern int fn_82CE63B0();


unsigned int fn_82D00E00(int *param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  int *piVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  int iVar10;
  
  if (param_1[1] == 0) {
    if ((param_1[2] & 0x3fffffffU) == 0) {
      uVar3 = (param_1[2] & 0x3fffffffU) << 1;
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      fn_82CE6310(param_1[3],param_1,uVar3,0x10);
    }
    lVar4 = 1 - (unsigned __int64)(unsigned int)param_1[1];
    if (0 < (int)lVar4) {
      puVar6 = (unsigned int *)(param_1[1] * 0x10 + *param_1 + 8);
      do {
        if (puVar6 != (unsigned int *)0x8) {
          puVar6[-2] = 0;
          puVar6[-1] = 0xffffffff;
          *puVar6 = 0xffffffff;
          puVar6[1] = 0xffffffff;
        }
        puVar6 = puVar6 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    param_1[1] = 1;
  }
  uVar8 = param_3 - 1;
  uVar3 = 0;
  if (-1 < (__int64)uVar8) {
    param_2 = (uVar8 & 0x3fffffff) * 4 + param_2;
    uVar9 = uVar3;
    do {
      iVar10 = uVar9 * 0x10;
      iVar1 = *(int *)param_2;
      uVar3 = *(unsigned int *)(iVar10 + *param_1 + 8);
      while (0 < (int)uVar3) {
        piVar5 = (int *)(uVar3 * 0x10 + *param_1);
        if (*piVar5 == iVar1) {
          if (uVar3 != 0xffffffff) goto LAB_82d00f8c;
          break;
        }
        uVar3 = piVar5[3];
      }
      uVar3 = param_1[1];
      if (uVar3 == (param_1[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(param_1[3],param_1,0x10);
      }
      puVar6 = (unsigned int *)(param_1[1] * 0x10 + *param_1);
      if (puVar6 != (unsigned int *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0xffffffff;
        puVar6[2] = 0xffffffff;
        puVar6[3] = 0xffffffff;
      }
      iVar2 = param_1[1] * 0x10;
      iVar7 = iVar2 + *param_1;
      param_1[1] = param_1[1] + 1;
      *(int *)(iVar2 + *param_1) = iVar1;
      *(unsigned int *)(iVar7 + 4) = uVar9;
      *(unsigned int *)(iVar7 + 0xc) = *(unsigned int *)(iVar10 + *param_1 + 8);
      *(unsigned int *)(iVar10 + *param_1 + 8) = uVar3;
LAB_82d00f8c:
      uVar8 = uVar8 - 1;
      param_2 = param_2 + -4;
      uVar9 = uVar3;
    } while (-1 < (__int64)uVar8);
  }
  return uVar3;
}


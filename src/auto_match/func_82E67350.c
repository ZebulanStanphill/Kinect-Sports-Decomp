void fn_82E67350(int *param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  int iVar12;
  
  lVar10 = 1;
  if (param_1 == param_2 + 0x41fe) {
    if (*(int *)(*param_2 + 0x334) == 0) {
      *(__int64 *)(param_1 + 0x2c) =
           ((__int64)*(int *)(*param_2 + 0xc) >> 3) + *(__int64 *)(param_1 + 0x2c);
    }
    uVar6 = (unsigned __int64)(unsigned int)param_2[0x1d72];
    lVar9 = *(__int64 *)(param_1 + 0x2e);
    if (param_2[0x1d72] <= param_2[0x1d71]) {
      do {
        uVar1 = param_2[0x1d72];
        iVar4 = (int)uVar6;
        iVar2 = param_1[0x29];
        uVar3 = (iVar4 * 0x7d) * lVar9;
        iVar5 = (int)((uVar6 - uVar1 & 0x1fffffff) << 3);
        uVar11 = (unsigned __int64)*(int *)(*param_2 + 0x50);
        lVar8 = (__int64)uVar3 / (__int64)uVar11;
        lVar7 = *(__int64 *)(param_1 + 0x2c) + *(__int64 *)(iVar5 + iVar2);
        trapDoubleWordImmediate(6,uVar11,0);
        iVar12 = 0;
        trapDoubleWordImmediate(5,uVar11 & ~((uVar3 * 2 | uVar3 >> 0x3f) - 1),0xffff);
        if (lVar8 < lVar7) {
          iVar12 = ((*(int *)(*param_2 + 0xc) >> 3) - (int)lVar8) + (int)lVar7;
        }
        else {
          *(__int64 *)(iVar5 + iVar2) = (lVar8 - lVar7) + *(__int64 *)(iVar5 + iVar2);
        }
        iVar2 = (int)((uVar6 - uVar1 & 0xffffffff) << 2);
        if (*(int *)(iVar2 + param_1[0x28]) < iVar12) {
          *(int *)(iVar2 + param_1[0x28]) = iVar12;
        }
        if (iVar4 < 0x801) {
          if (iVar4 < 0x401) {
            if (iVar4 < 0x201) {
              if (iVar4 < 0x101) {
                if (0x80 < iVar4) {
                  lVar10 = 2;
                }
              }
              else {
                lVar10 = 4;
              }
            }
            else {
              lVar10 = 8;
            }
          }
          else {
            lVar10 = 0x10;
          }
        }
        else {
          lVar10 = 0x20;
        }
        uVar1 = param_2[0x1d71];
        if ((iVar4 < (int)uVar1) && ((int)uVar1 < (int)lVar10 + iVar4)) {
          lVar10 = uVar1 - uVar6;
        }
        uVar6 = lVar10 + uVar6;
      } while ((int)uVar6 <= (int)uVar1);
    }
  }
  return;
}


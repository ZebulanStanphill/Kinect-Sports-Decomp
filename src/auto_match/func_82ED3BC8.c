extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82ED3BC8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  int iVar8;
  __int64 lVar7;
  __int64 lVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  
  if ((((param_2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) && ((int)param_4 != 0)) {
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    uVar11 = (unsigned __int64)uVar1;
    lVar6 = 2;
    uVar2 = *(unsigned int *)(param_1 + 0x10);
    uVar4 = uVar1 >> 1;
    uVar3 = (unsigned __int64)uVar4;
    if ((*(int *)(param_1 + 0x38) != 0) && (3 < *(int *)(*(int *)(param_1 + 0x38) + 0x7b34))) {
      lVar6 = 4;
    }
    lVar9 = (__int64)(int)(uVar2 - 1) * (__int64)(int)uVar1 + lVar6 + param_2;
    if (0 < (__int64)((unsigned __int64)uVar2 - lVar6)) {
      fn_82F68CC0(lVar9,(__int64)((int)((unsigned __int64)uVar2 - lVar6) + -1) * (__int64)(int)uVar1 +
                         param_2,uVar11 - lVar6);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar9 - lVar6,*(unsigned char *)lVar9,lVar6);
    }
    iVar8 = (int)lVar6;
    lVar9 = (__int64)iVar8 * (__int64)(int)uVar1 + param_2;
    if (iVar8 != 0) {
      do {
        fn_82F68CC0(param_2,lVar9,uVar11);
        lVar6 = lVar6 + -1;
        param_2 = param_2 + uVar11;
      } while (lVar6 != 0);
    }
    iVar8 = iVar8 >> 1;
    lVar12 = (__int64)iVar8;
    lVar7 = (unsigned __int64)(uVar2 >> 1) - lVar12;
    iVar5 = (int)lVar7;
    lVar9 = (__int64)(int)((uVar2 >> 1) - 1) * (__int64)(int)uVar4 + lVar12;
    lVar6 = (__int64)(iVar5 + -1) * (__int64)(int)uVar4;
    lVar10 = lVar9 + param_3;
    if (0 < lVar7) {
      fn_82F68CC0(lVar10,lVar6 + param_3,uVar3 - lVar12);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar10 - lVar12,*(unsigned char *)lVar10,lVar12);
    }
    lVar10 = (__int64)iVar8 * (__int64)(int)uVar4 + param_3;
    lVar7 = lVar12;
    if (iVar8 != 0) {
      do {
        fn_82F68CC0(param_3,lVar10,uVar3);
        lVar7 = lVar7 + -1;
        param_3 = param_3 + uVar3;
      } while (lVar7 != 0);
    }
    lVar9 = lVar9 + param_4;
    if (0 < iVar5) {
      fn_82F68CC0(lVar9,lVar6 + param_4,uVar3 - lVar12);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar9 - lVar12,*(unsigned char *)lVar9,lVar12);
    }
    lVar6 = (__int64)iVar8 * (__int64)(int)uVar4 + param_4;
    if (iVar8 != 0) {
      do {
        fn_82F68CC0(param_4,lVar6,uVar3);
        lVar12 = lVar12 + -1;
        param_4 = param_4 + uVar3;
      } while (lVar12 != 0);
    }
  }
  return;
}


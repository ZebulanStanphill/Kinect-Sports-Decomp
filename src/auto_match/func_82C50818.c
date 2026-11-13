extern int fn_82C56398();
extern int fn_82C69650();
extern int fn_82CAAF00();
extern int fn_82CAB0E0();
extern int fn_82F691F0();


unsigned __int64 fn_82C50818(int param_1,int param_2,int param_3,__int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  __int64 lVar11;
  __int64 lVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  
  uVar8 = param_2 + 0xfU & 0xfffffff0;
  uVar9 = param_3 + 0xfU & 0xfffffff0;
  iVar10 = *(int *)(param_1 + 0x6070) + 8;
  if (*(int *)(param_1 + 0xf8c) == 0) {
    iVar14 = (int)uVar8 >> 1;
    uVar7 = (int)uVar9 >> 1;
  }
  else {
    iVar14 = (int)uVar8 >> 2;
    uVar7 = uVar9;
  }
  iVar13 = *(int *)(param_1 + 0x3cb0);
  if (iVar13 == 7) {
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    uVar7 = (int)uVar9 >> 1;
  }
  iVar6 = uVar8 + 0x40;
  uVar8 = (int)(param_2 + 0xfU) >> 4;
  iVar1 = (int)uVar9 >> 4;
  lVar11 = (__int64)(int)(uVar9 + 0x40) * (__int64)iVar6;
  lVar12 = (__int64)(int)(uVar7 + 0x20) * (__int64)(iVar14 + 0x20);
  iVar14 = (int)param_4;
  if (*(int *)(param_1 + 0x3c04) == 0) {
    uVar4 = (unsigned __int64)(*(int *)(param_1 + 0x5710) != 0);
    if (iVar14 != 0) {
      uVar4 = param_4 - 6;
    }
    uVar2 = fn_82CAB0E0(iVar10,*(unsigned int *)(param_1 + 0x3ba4),lVar11,lVar12,uVar4 + 6,
                              (__int64)(int)(((unsigned int)(iVar13 == 7) * 8 - (unsigned int)(iVar13 == 7)) + 1) *
                              (__int64)iVar6,*(unsigned int *)(param_1 + 0x5628),
                              *(unsigned int *)(param_1 + 0x562c));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (iVar14 != 0) {
      iVar14 = *(int *)(param_1 + 0x6070);
      fn_82C69650(param_1,param_4);
      iVar13 = 0;
      if (*(int *)(iVar14 + 0x47e0) < 1) {
        return 0;
      }
      piVar15 = (int *)(iVar14 + 0x45dc);
      do {
        iVar6 = *piVar15;
        uVar3 = fn_82C56398(iVar10,((__int64)(iVar1 + 1) * (__int64)(int)uVar8 & 0xfffffffU) << 4
                             ,0xffffffff82196582);
        *(unsigned int *)(iVar6 + 0x270) = uVar3;
        if (*(int *)(*piVar15 + 0x270) == 0) {
          return 0xfffffffffffffff7;
        }
        iVar13 = iVar13 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar13 < *(int *)(iVar14 + 0x47e0));
      return 0;
    }
    fn_82CAAF00(*(unsigned int *)(param_1 + 0x3ba4),param_1 + 0xeac,0xffffffffffffffff);
    if (*(int *)(param_1 + 0xeac) == 0) {
      return 0xfffffffffffffff7;
    }
    *(unsigned int *)(*(int *)(param_1 + 0xeac) + 0x26c) = 1;
    fn_82CAAF00(*(unsigned int *)(param_1 + 0x3ba4),param_1 + 0xea4,0xffffffffffffffff);
    if (*(int *)(param_1 + 0xea4) == 0) {
      return 0xfffffffffffffff7;
    }
    *(unsigned int *)(*(int *)(param_1 + 0xea4) + 0x26c) = 1;
  }
  else {
    lVar5 = param_4;
    if (iVar14 < 5) {
      lVar5 = 4;
    }
    uVar2 = fn_82CAB0E0(iVar10,*(unsigned int *)(param_1 + 0x3ba4),lVar11,lVar12,lVar5,
                              (__int64)(int)(((unsigned int)(iVar13 == 7) * 8 - (unsigned int)(iVar13 == 7)) + 1) *
                              (__int64)iVar6,*(unsigned int *)(param_1 + 0x5628),
                              *(unsigned int *)(param_1 + 0x562c));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (iVar14 != 0) {
      iVar14 = *(int *)(param_1 + 0x6070);
      fn_82C69650(param_1,param_4);
      iVar13 = 0;
      if (*(int *)(iVar14 + 0x47e0) < 1) {
        return 0;
      }
      piVar15 = (int *)(iVar14 + 0x45dc);
      do {
        iVar6 = *piVar15;
        uVar3 = fn_82C56398(iVar10,((__int64)(iVar1 + 1) * (__int64)(int)uVar8 & 0xfffffffU) << 4
                             ,0xffffffff82196582);
        *(unsigned int *)(iVar6 + 0x270) = uVar3;
        if (*(int *)(*piVar15 + 0x270) == 0) {
          return 0xfffffffffffffff7;
        }
        iVar13 = iVar13 + 1;
        piVar15 = piVar15 + 1;
      } while (iVar13 < *(int *)(iVar14 + 0x47e0));
      return 0;
    }
  }
  piVar15 = (int *)(param_1 + 0xea0);
  fn_82CAAF00(*(unsigned int *)(param_1 + 0x3ba4),piVar15,0xffffffffffffffff);
  if (*(int *)(param_1 + 0xea0) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0xea0) + 0x26c) = 1;
    fn_82CAAF00(*(unsigned int *)(param_1 + 0x3ba4),param_1 + 0xea8,0xffffffffffffffff);
    if (*(int *)(param_1 + 0xea8) != 0) {
      *(unsigned int *)(*(int *)(param_1 + 0xea8) + 0x26c) = 1;
      fn_82CAAF00(*(unsigned int *)(param_1 + 0x3ba4),param_1 + 0xeb0,0xffffffffffffffff);
      if (*(int *)(param_1 + 0xeb0) != 0) {
        *(unsigned int *)(*(int *)(param_1 + 0xeb0) + 0x26c) = 1;
        fn_82CAAF00(*(unsigned int *)(param_1 + 0x3ba4),param_1 + 0xeb4,0xffffffffffffffff);
        if (*(int *)(param_1 + 0xeb4) != 0) {
          *(unsigned int *)(*(int *)(param_1 + 0xeb4) + 0x26c) = 1;
          uVar3 = fn_82C56398(iVar10,((unsigned __int64)uVar8 & 0xfffffff) * 0x10 + (__int64)iVar1 + 1,
                               0xffffffff82196582);
          *(unsigned int *)(*piVar15 + 0x270) = uVar3;
          piVar15 = (int *)*piVar15;
          if (piVar15[0x9c] != 0) {
            iVar10 = *piVar15;
            *(int *)(param_1 + 0xec0) = iVar10;
            iVar14 = piVar15[1];
            *(int *)(param_1 + 0xec4) = iVar14;
            iVar13 = piVar15[2];
            *(int *)(param_1 + 0xec8) = iVar13;
            *(int *)(param_1 + 0xf14) = *(int *)(param_1 + 0xe0) + iVar14;
            *(int *)(param_1 + 0xf18) = iVar13 + *(int *)(param_1 + 0xe0);
            *(int *)(param_1 + 0xf10) = *(int *)(param_1 + 0xdc) + iVar10;
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(iVar10,0,lVar11);
          }
        }
      }
    }
  }
  return 0xfffffffffffffff7;
}


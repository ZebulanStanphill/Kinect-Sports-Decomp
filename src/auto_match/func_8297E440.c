extern unsigned int *auStack_b0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82966EC8();
extern int fn_82966FE0();
extern int fn_82969030();
extern int fn_8296CE60();
extern int fn_829750C8();
extern int fn_8297AE90();
extern int memcpy();


unsigned __int64 fn_8297E440(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  int *piVar10;
  __int64 lVar9;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  unsigned char auStack_b0 [96];
  
  lVar11 = 0;
  if (((*(unsigned int *)(param_1 + 0x6c) & 0x10) == 0) && ((*(unsigned int *)(param_1 + 0x6c) & 8) == 0)) {
    return 1;
  }
  uVar3 = fn_82969030(param_1);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  iVar4 = fn_829750C8(param_1,auStack_b0,*(unsigned int *)(param_1 + 0x88),
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) - 1);
  if ((iVar4 < 0) || (iVar4 = fn_8297AE90(param_1,auStack_b0,0), iVar4 < 0)) {
    fn_8296CE60(param_1,auStack_b0);
    iVar4 = fn_829750C8(param_1,auStack_b0,*(unsigned int *)(param_1 + 0x88),
                          *(unsigned int *)(param_1 + 0x2c));
    if ((iVar4 < 0) || (iVar4 = fn_8297AE90(param_1,auStack_b0,0), iVar4 < 0)) goto LAB_8297e6d0;
  }
  lVar11 = fn_8265C940(*(int *)(param_1 + 0xc) << 2,0x24810000);
  if (lVar11 != 0) {
    memcpy(lVar11,*(unsigned int *)(param_1 + 0x18),*(int *)(param_1 + 0xc) << 2);
    uVar5 = fn_82966EC8(param_1);
    uVar13 = 0;
    uVar7 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        if ((*(unsigned int *)(*(int *)(iVar4 + *(int *)(param_1 + 0x18)) + 0x2c) & 1) != 0) {
          uVar12 = uVar13;
          iVar14 = iVar4;
          uVar2 = uVar13 & 0xffffffff;
          while ((uVar2 != 0 && (iVar6 = fn_82966FE0(param_1,uVar12), iVar6 != 0))) {
            uVar7 = fn_82966EC8(param_1);
            if ((uVar7 <= uVar5) &&
               (((uVar7 != uVar5 ||
                 (((*(unsigned int *)(param_1 + 0x6c) & 8) == 0 &&
                  (piVar10 = (int *)(iVar14 + *(int *)(param_1 + 0x18)),
                  *(int *)(*piVar10 + 0x2c) == *(int *)(piVar10[-1] + 0x2c))))) &&
                (iVar6 = fn_8297AE90(param_1,auStack_b0,0), -1 < iVar6)))) {
              memcpy(lVar11,*(unsigned int *)(param_1 + 0x18),iVar4 + 4);
              uVar5 = uVar7;
            }
            uVar12 = uVar12 - 1;
            iVar14 = iVar14 + -4;
            uVar2 = uVar12;
          }
          memcpy(*(unsigned int *)(param_1 + 0x18),lVar11,iVar4 + 4);
        }
        uVar7 = *(unsigned int *)(param_1 + 0xc);
        uVar13 = uVar13 + 1;
        iVar4 = iVar4 + 4;
      } while ((uVar13 & 0xffffffff) < (unsigned __int64)uVar7);
    }
    uVar13 = 0;
    if (uVar7 != 0) {
      do {
        lVar9 = (uVar13 & 0x3fffffff) << 2;
        if ((*(unsigned int *)(*(int *)((int)lVar9 + *(int *)(param_1 + 0x18)) + 0x2c) & 1) != 0) {
          uVar12 = uVar13 + 1;
          if ((uVar12 & 0xffffffff) < (unsigned __int64)uVar7) {
            lVar8 = (uVar12 & 0x3fffffff) << 2;
            do {
              if (*(int *)(*(int *)(*(int *)(param_1 + 0x18) + (int)lVar9) + 0x2c) !=
                  *(int *)(*(int *)((int)lVar8 + *(int *)(param_1 + 0x18)) + 0x2c)) break;
              uVar12 = uVar12 + 1;
              lVar8 = lVar8 + 4;
            } while ((uVar12 & 0xffffffff) < (unsigned __int64)uVar7);
          }
          uVar13 = (uVar12 - uVar13 & 0xffffffff) >> 1;
          if (uVar13 != 0) {
            lVar8 = (uVar12 & 0x3fffffff) << 2;
            do {
              iVar4 = *(int *)(param_1 + 0x18);
              iVar14 = (int)lVar8;
              uVar1 = *(unsigned int *)((int)lVar9 + iVar4);
              *(unsigned int *)((int)lVar9 + iVar4) = *(unsigned int *)(iVar14 + iVar4 + -4);
              lVar9 = lVar9 + 4;
              lVar8 = lVar8 + -4;
              *(unsigned int *)(iVar14 + *(int *)(param_1 + 0x18) + -4) = uVar1;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          uVar13 = uVar12 - 1;
        }
        uVar7 = *(unsigned int *)(param_1 + 0xc);
        uVar13 = uVar13 + 1;
      } while ((uVar13 & 0xffffffff) < (unsigned __int64)uVar7);
    }
  }
LAB_8297e6d0:
  fn_8296CE60(param_1,auStack_b0);
  fn_8265C990(lVar11,0x24810000);
  return 0;
}


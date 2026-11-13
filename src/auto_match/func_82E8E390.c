extern int fn_82E83E90();
extern int fn_82E89640();
extern int fn_82E8D780();
extern int fn_82F02A98();
extern int fn_82F03028();
extern int fn_82F03248();
extern int fn_82F03E00();
extern int fn_82F07248();
extern int fn_82F0F9A0();
extern int fn_82F1DDA0();
extern int fn_82F65350();
extern int fn_82F691F0();


void fn_82E8E390(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  __int64 lVar10;
  
  iVar4 = fn_82E8D780();
  fn_82E83E90(iVar4,*(unsigned int *)(iVar4 + 0x2a0));
  if ((*(int *)(param_1 + 0x62c) == 0) || (uVar8 = 1, *(int *)(param_1 + 0x588) < 7)) {
    uVar8 = 0;
  }
  *(unsigned int *)(param_1 + 0x630) = uVar8;
  fn_82F1DDA0(param_1,*(unsigned int *)(param_1 + 0x588));
  if ((*(int *)(param_1 + 0xa0c) != 0) && (*(int *)(param_1 + 0x978) != 0)) {
    fn_82F07248(param_1);
  }
  if (*(int *)(param_1 + 0x7b38) == 0) {
    *(unsigned int *)(param_1 + 0xa44) = 0;
  }
  else if (*(int *)(param_1 + 0x6de4) == 0) {
    *(unsigned int *)(param_1 + 0xa48) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0xa4c) = 0;
  }
  if ((*(int *)(param_1 + 0x1a74) != 0) && (*(int *)(param_1 + 0x64c) != 0)) {
    uVar5 = fn_82F65350();
    *(unsigned int *)(param_1 + 0x1c2c) = 0;
    *(unsigned int *)(param_1 + 0x10) = uVar5 & 3;
    fn_82F03028(param_1);
    fn_82F02A98(param_1,*(unsigned int *)(param_1 + 0x10));
    fn_82F03248(param_1);
    fn_82F03E00(param_1);
  }
  if ((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) == 0)) {
    if (*(int *)(param_1 + 0x924) == 7) {
      *(unsigned int *)(param_1 + 0x924) = 2;
    }
    if ((*(int *)(param_1 + 0x924) == 0) || (*(int *)(param_1 + 0x924) == 2)) {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x2d8) != 0) {
        iVar4 = 0;
        do {
          uVar5 = uVar5 + 1;
          *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x1e54) + 0x54) = 3;
          *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x1e54) + 0x7c) = 0;
          iVar4 = iVar4 + 0x114;
        } while (uVar5 < *(unsigned int *)(param_1 + 0x2d8));
      }
    }
    else {
      uVar5 = 0;
      if (*(int *)(param_1 + 0x2d8) != 0) {
        iVar4 = 0;
        do {
          uVar5 = uVar5 + 1;
          *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x1e54) + 0x54) = 3;
          *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x1e54) + 0x7c) = 1;
          iVar4 = iVar4 + 0x114;
        } while (uVar5 < *(unsigned int *)(param_1 + 0x2d8));
      }
    }
  }
  fn_82F0F9A0(param_1,1);
  fn_82E89640(param_1,*(unsigned int *)(param_1 + 0x2a0));
  if (*(int *)(param_1 + 0x6f90) != 0) {
    *(int *)(param_1 + 0x6f94) =
         (int)((*(double *)(*(int *)(param_1 + 0x75fc) + *(int *)(param_1 + 0x588) * 8 + -8) *
               (double)(__int64)*(int *)(param_1 + 0x75f8)) / (double)*(unsigned int *)(param_1 + 0x2d8));
  }
  if (((5 < *(int *)(param_1 + 4)) && (0 < *(int *)(param_1 + 0x84c))) &&
     (*(int *)(param_1 + 0xaf0) != 4)) {
    if (*(int *)(param_1 + 0x7b38) == 0) {
      iVar4 = *(int *)(param_1 + 0x990);
      iVar1 = *(int *)(param_1 + 0x994);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1ea8);
      iVar1 = *(int *)(param_1 + 0x1eac);
    }
    lVar10 = 0;
    if ((*(int *)(param_1 + 0x7b38) != 0) && (*(int *)(param_1 + 0x6de4) == 1)) {
      lVar10 = ((__int64)*(int *)(param_1 + 0x2d4) * (__int64)*(int *)(param_1 + 0x2d0) &
               0x3fffffffU) << 2;
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x2d4) != 0) {
      do {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x2d0) != 0) {
          do {
            uVar6 = ((__int64)(int)*(unsigned int *)(param_1 + 0x2d0) * (__int64)(int)uVar5 & 0x7fffffffU)
                    * 2 + uVar7;
            uVar7 = uVar7 + 1;
            uVar6 = (uVar6 & 0x7fffffff) * 2 + lVar10;
            iVar2 = (int)((uVar6 & 0xffffffff) << 1);
            iVar3 = (int)((((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) * 2 + uVar6 &
                          0xffffffff) << 1);
            *(unsigned short *)(iVar2 + iVar4) = 0x4000;
            *(unsigned short *)(iVar2 + iVar4 + 2) = 0x4000;
            *(unsigned short *)(iVar3 + iVar4) = 0x4000;
            *(unsigned short *)(iVar3 + iVar4 + 2) = 0x4000;
            *(unsigned short *)(iVar2 + iVar1) = 0x4000;
            *(unsigned short *)(iVar2 + iVar1 + 2) = 0x4000;
            *(unsigned short *)(iVar3 + iVar1) = 0x4000;
            *(unsigned short *)(iVar3 + iVar1 + 2) = 0x4000;
          } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x2d0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(unsigned int *)(param_1 + 0x2d4));
    }
  }
  if (((0 < *(int *)(param_1 + 0x84c)) && (*(int *)(param_1 + 0xaf0) != 4)) &&
     (uVar5 = 0, *(int *)(param_1 + 0x2d4) != 0)) {
    do {
      uVar9 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          iVar4 = *(int *)(param_1 + 0x2d0) * uVar5 + uVar9;
          uVar9 = uVar9 + 1;
          *(unsigned int *)(iVar4 * 0x114 + *(int *)(param_1 + 0x1e6c) + 0x54) = 3;
        } while (uVar9 < *(unsigned int *)(param_1 + 0x2d0));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x2d4));
  }
  if (*(int *)(param_1 + 0x5c8) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(param_1 + 0x5dc),0xff,
                 ((__int64)*(int *)(param_1 + 0x2d0) * (__int64)*(int *)(param_1 + 0x2d4) &
                 0x7fffffffU) << 1);
  }
  return;
}


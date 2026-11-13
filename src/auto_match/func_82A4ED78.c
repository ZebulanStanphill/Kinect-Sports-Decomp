extern int fn_82A3FF60();
extern int fn_82A49B30();
extern int fn_82A4E5A8();
extern int fn_82A4EBB0();
extern int fn_82A64020();
extern int fn_82A68B10();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


__int64 fn_82A4ED78(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6,
                      unsigned __int64 param_7,unsigned __int64 param_8)

{
  float *pfVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned int uVar12;
  __int64 lVar11;
  unsigned int uVar13;
  int in_stack_00000054;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    return 0;
  }
  if ((((param_3 == 0) || (0x40 < param_3)) || (param_4 == 0)) ||
     ((0x40 < param_4 || ((*(int *)(param_1 + 0x104) != 0 && (param_2 != 3)))))) {
    lVar9 = -0x7768ffff;
    goto LAB_82a4edf4;
  }
  *(int *)(param_1 + 0xc4) = param_5;
  uVar7 = (__int64)(int)param_3 * (__int64)(int)param_4;
  *(int *)(param_1 + 200) = param_6;
  lVar9 = (uVar7 & 0x3fffffff) << 2;
  if (0x3fffffff < (uVar7 & 0xffffffff)) {
    lVar9 = -1;
  }
  iVar2 = fn_82A3FF60(0xffffffff83219d50,lVar9,0x2097000a,0);
  *(int *)(param_1 + 0x80) = iVar2;
  if (iVar2 != 0) {
    lVar9 = (uVar7 & 0x3fffffff) << 2;
    if (0x3fffffff < (uVar7 & 0xffffffff)) {
      lVar9 = -1;
    }
    iVar2 = fn_82A3FF60(0xffffffff83219d50,lVar9,0x2097000a,0);
    *(int *)(param_1 + 0x98) = iVar2;
    if (iVar2 != 0) {
      lVar9 = (uVar7 & 0x3fffffff) << 2;
      if (0x3fffffff < (uVar7 & 0xffffffff)) {
        lVar9 = -1;
      }
      iVar2 = fn_82A3FF60(0xffffffff83219d50,lVar9,0x2097000a,0);
      *(int *)(param_1 + 0xb0) = iVar2;
      if (iVar2 != 0) {
        lVar9 = (uVar7 & 0x3fffffff) << 2;
        if (0x3fffffff < (uVar7 & 0xffffffff)) {
          lVar9 = -1;
        }
        iVar2 = fn_82A3FF60(0xffffffff83219d50,lVar9,0x2097000a,0);
        *(int *)(param_1 + 0xd0) = iVar2;
        if (iVar2 != 0) {
          lVar9 = (uVar7 & 0x3fffffff) << 2;
          if (0x3fffffff < (uVar7 & 0xffffffff)) {
            lVar9 = -1;
          }
          iVar2 = fn_82A3FF60(0xffffffff83219d50,lVar9,0x2097000a,0);
          *(int *)(param_1 + 0xd4) = iVar2;
          if (iVar2 != 0) {
            if (*(int *)(param_1 + 0x104) != 0) {
              lVar9 = ((__int64)(int)param_3 * (__int64)in_stack_00000054 & 0x3fffffffU) << 2;
              if (0x3fffffff < ((__int64)(int)param_3 * (__int64)in_stack_00000054 & 0xffffffffU))
              {
                lVar9 = -1;
              }
              iVar2 = fn_82A3FF60(0xffffffff83219d50,lVar9,0x2097000a,0);
              *(int *)(param_1 + 0xd8) = iVar2;
              if (iVar2 == 0) goto LAB_82a4ef4c;
            }
            if (*(int *)(param_1 + 0x104) == 0) {
              if (*(int *)(param_1 + 0x104) == 0) {
                puVar8 = (unsigned int *)(param_1 + 0x70);
                *(unsigned int *)(param_1 + 0x60) = param_3;
                *(unsigned int *)(param_1 + 0x3c) = param_3;
                *(unsigned int **)(param_1 + 0xb8) = puVar8;
                *(unsigned int *)(param_1 + 0x40) = param_4;
                if ((param_7 & 0xffffffff) == 0) {
                  param_7 = fn_82A49B30(param_3 & 0xffff);
                }
                if ((param_8 & 0xffffffff) == 0) {
                  param_8 = fn_82A49B30(param_4 & 0xffff);
                }
                lVar9 = fn_82A4E5A8(param_3,param_4,param_7,param_8,
                                      *(unsigned int *)(param_1 + 0x80));
                if (-1 < lVar9) {
                  uVar12 = 0;
                  uVar10 = 0;
                  if (*(int *)(param_1 + 0x100) != 0) {
                    uVar12 = 4;
                    uVar10 = 4;
                  }
                  if (param_3 == param_4) {
                    uVar12 = uVar12 | 3;
                    uVar4 = 0;
                    if (param_4 != 0) {
                      iVar2 = 0;
                      do {
                        uVar5 = 0;
                        if (param_3 != 0) {
                          pfVar1 = *(float **)(param_1 + 0x80);
                          uVar13 = param_3;
                          do {
                            if (uVar5 == uVar4) {
                              if (pfVar1[iVar2 + uVar5] != *pfVar1) {
                                uVar12 = uVar12 & 0xfffffffe;
                              }
                            }
                            else if (pfVar1[iVar2 + uVar5] != lbl_821AAD20) {
                              uVar12 = uVar12 & 0xfffffffc;
                            }
                            uVar5 = uVar5 + 1;
                            uVar13 = uVar13 - 1;
                          } while (uVar13 != 0);
                        }
                        uVar4 = uVar4 + 1;
                        iVar2 = iVar2 + param_3;
                      } while (uVar4 < param_4);
                    }
                  }
                  *(unsigned int *)(param_1 + 0x84) = uVar12;
                  if (param_2 == 1) {
                    if (param_5 == 4) {
                      if (param_6 == 0x20) {
                        uVar3 = fn_82A64020(6,param_3,param_4,uVar12);
                        *(unsigned int *)(param_1 + 0x7c) = uVar3;
                        uVar3 = fn_82A64020(6,param_3,param_4,uVar10);
                        uVar6 = 6;
                      }
                      else if (param_6 == 0x18) {
                        uVar3 = fn_82A64020(5,param_3,param_4,uVar12);
                        *(unsigned int *)(param_1 + 0x7c) = uVar3;
                        uVar3 = fn_82A64020(5,param_3,param_4,uVar10);
                        uVar6 = 5;
                      }
                      else {
                        uVar3 = fn_82A64020(3,param_3,param_4,uVar12);
                        *(unsigned int *)(param_1 + 0x7c) = uVar3;
                        uVar3 = fn_82A64020(3,param_3,param_4,uVar10);
                        uVar6 = 3;
                      }
                    }
                    else if (param_5 == 3) {
                      if (param_6 == 0x18) {
                        uVar3 = fn_82A64020(4,param_3,param_4,uVar12);
                        *(unsigned int *)(param_1 + 0x7c) = uVar3;
                        uVar3 = fn_82A64020(4,param_3,param_4,uVar10);
                        uVar6 = 4;
                      }
                      else {
                        uVar3 = fn_82A64020(2,param_3,param_4,uVar12);
                        *(unsigned int *)(param_1 + 0x7c) = uVar3;
                        uVar3 = fn_82A64020(2,param_3,param_4,uVar10);
                        uVar6 = 2;
                      }
                    }
                    else {
                      if (param_5 != 2) {
                        uVar3 = fn_82A64020(0,param_3,param_4,uVar12);
                        *(unsigned int *)(param_1 + 0x7c) = uVar3;
                        uVar3 = fn_82A64020(0,param_3,param_4,uVar10);
                        *(unsigned int *)(param_1 + 0xe0) = uVar3;
                        *(unsigned int *)(param_1 + 0x34) = 0;
                        goto LAB_82a4f29c;
                      }
                      uVar3 = fn_82A64020(1,param_3,param_4,uVar12);
                      *(unsigned int *)(param_1 + 0x7c) = uVar3;
                      uVar3 = fn_82A64020(1,param_3,param_4,uVar10);
                      uVar6 = 1;
                    }
                    *(unsigned int *)(param_1 + 0xe0) = uVar3;
                    *(unsigned int *)(param_1 + 0x34) = uVar6;
                  }
                  else {
                    uVar3 = fn_82A64020(7,param_3,param_4,uVar12);
                    *(unsigned int *)(param_1 + 0x7c) = uVar3;
                    uVar3 = fn_82A64020(7,param_3,param_4,uVar10);
                    *(unsigned int *)(param_1 + 0xe0) = uVar3;
                    *(unsigned int *)(param_1 + 0x34) = 7;
                    if (*(int *)(param_1 + 0x104) != 0) {
                      uVar3 = fn_82A68B10(param_3);
                      *(unsigned int *)(param_1 + 0xe4) = uVar3;
                    }
                    *(unsigned int *)(param_1 + 0xf8) = 1;
                  }
LAB_82a4f29c:
                  *(unsigned int *)(param_1 + 0xec) = uVar12;
                  lVar11 = (uVar7 & 0x3fffffff) << 2;
                  *puVar8 = 0;
                  *(unsigned int *)(param_1 + 100) = 0;
                  uVar3 = lbl_82002AE0;
                  *(unsigned int *)(param_1 + 0xdc) = *(unsigned int *)(param_1 + 0x7c);
                  *(unsigned int *)(param_1 + 0x74) = uVar3;
                  *(unsigned int *)(param_1 + 0x68) = uVar3;
                  *(unsigned int *)(param_1 + 0x78) = uVar3;
                  *(unsigned int *)(param_1 + 0x6c) = uVar3;
                  fn_82F68CC0(*(unsigned int *)(param_1 + 0x98),*(unsigned int *)(param_1 + 0x80),
                               lVar11);
                  *(unsigned int *)(param_1 + 0x8c) = *(unsigned int *)(param_1 + 0x74);
                  *(unsigned int *)(param_1 + 0x90) = *(unsigned int *)(param_1 + 0x78);
                  *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_1 + 0x7c);
                  *(unsigned int *)(param_1 + 0x9c) = *(unsigned int *)(param_1 + 0x84);
                  *(unsigned int *)(param_1 + 0x88) = *puVar8;
                  fn_82F68CC0(*(unsigned int *)(param_1 + 0xb0),*(unsigned int *)(param_1 + 0x80),
                               lVar11);
                  *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)(param_1 + 0x74);
                  *(unsigned int *)(param_1 + 0xa8) = *(unsigned int *)(param_1 + 0x78);
                  *(unsigned int *)(param_1 + 0xac) = *(unsigned int *)(param_1 + 0x7c);
                  *(unsigned int *)(param_1 + 0xb4) = *(unsigned int *)(param_1 + 0x84);
                  *(unsigned int *)(param_1 + 0xa0) = *puVar8;
                  return lVar9;
                }
                goto LAB_82a4edf4;
              }
              uVar12 = param_3 & 0x3fffffff;
              if (0x3fffffff < param_3) {
                uVar12 = 0xffffffff;
              }
              uVar7 = fn_82A3FF60(0xffffffff83219d50,uVar12,0x2097000a,0);
              *(int *)(param_1 + 0x58) = (int)uVar7;
              if ((uVar7 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(uVar7,0,param_3 & 0x3fffffff);
              }
            }
            else {
              uVar12 = param_3 & 0x3fffffff;
              if (0x3fffffff < param_3) {
                uVar12 = 0xffffffff;
              }
              uVar7 = fn_82A3FF60(0xffffffff83219d50,uVar12,0x2097000a,0);
              *(int *)(param_1 + 0x54) = (int)uVar7;
              if ((uVar7 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(uVar7,0,param_3 & 0x3fffffff);
              }
            }
          }
        }
      }
    }
  }
LAB_82a4ef4c:
  lVar9 = -0x7ff8fff2;
LAB_82a4edf4:
  fn_82A4EBB0(param_1);
  return lVar9;
}


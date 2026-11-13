extern int fn_8265C940();
extern int fn_82F65390();


unsigned __int64 fn_82AABB18(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int uVar11;
  __int64 lVar10;
  int *piVar12;
  
  piVar12 = *(int **)(param_1 + 0xe0);
  iVar2 = fn_82F65390(param_1,0xffffffff820d5c7c,8);
  if ((iVar2 != 0) || (0x19a < *(unsigned short *)(param_1 + 8))) {
    return 0xfffffffffffffff0;
  }
  *(unsigned int *)(param_1 + 0xd4) = *(int *)(param_1 + 0x4c) + 0x1fU & 0xffffffe0;
  *(unsigned int *)(param_1 + 0xd0) = *(int *)(param_1 + 0x48) + 0x1fU & 0xffffffe0;
  piVar12[9] = 0;
  piVar12[8] = 0;
  uVar7 = *(unsigned int *)(param_1 + 0xd4);
  uVar1 = *(unsigned short *)(param_1 + 0x5e);
  uVar9 = (unsigned __int64)uVar1;
  trapWord(6,uVar9,0);
  piVar12[6] = 0;
  piVar12[7] = 0;
  uVar5 = (uVar9 + uVar7) - 1;
  piVar12[5] = (int)uVar5 / (int)(unsigned int)uVar1;
  trapWord(5,uVar9 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  if (*piVar12 != 0) {
    iVar2 = piVar12[2];
    if ((((iVar2 < 0) || (piVar12[4] < 0)) ||
        (iVar3 = piVar12[4] + iVar2, *(int *)(param_1 + 0x4c) < iVar3)) ||
       (((iVar8 = piVar12[1], iVar8 < 0 || (piVar12[3] < 0)) ||
        (iVar6 = piVar12[3] + iVar8, *(int *)(param_1 + 0x48) < iVar6)))) {
      return 0xffffffffffffffbd;
    }
    uVar11 = iVar8 - 10;
    uVar7 = *(int *)(param_1 + 0xd0) + 0xf;
    iVar8 = ((int)uVar7 >> 4) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 0xf) != 0);
    lVar10 = (__int64)((int)uVar11 >> 4) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 0xf) != 0);
    piVar12[6] = (int)lVar10;
    if (lVar10 < 0) {
      piVar12[6] = 0;
    }
    uVar7 = iVar6 + 9;
    iVar6 = ((int)uVar7 >> 4) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 0xf) != 0);
    if (iVar8 <= iVar6) {
      iVar6 = iVar8 + -1;
    }
    uVar7 = iVar2 - 10;
    uVar1 = *(unsigned short *)(param_1 + 0x5e);
    piVar12[7] = (int)uVar7 / (int)(unsigned int)uVar1;
    trapWord(6,(unsigned __int64)uVar1,0);
    trapWord(5,(unsigned __int64)uVar1 &
               ~((((unsigned __int64)uVar7 & 0x7fffffff) << 1 | (unsigned __int64)(uVar7 >> 0x1f)) - 1),0xffff);
    if ((int)uVar7 / (int)(unsigned int)uVar1 < 0) {
      piVar12[7] = 0;
    }
    uVar7 = iVar3 + 10;
    uVar1 = *(unsigned short *)(param_1 + 0x5e);
    trapWord(6,(unsigned __int64)uVar1,0);
    iVar2 = (int)uVar7 / (int)(unsigned int)uVar1;
    trapWord(5,(unsigned __int64)uVar1 &
               ~((((unsigned __int64)uVar7 & 0x7fffffff) << 1 | (unsigned __int64)(uVar7 >> 0x1f)) - 1),0xffff);
    if (piVar12[5] <= iVar2) {
      iVar2 = piVar12[5] + -1;
    }
    *(int *)(param_1 + 0xd0) = ((iVar6 - piVar12[6]) * 0x10 + 0x2f >> 5) << 5;
    iVar3 = (unsigned int)*(unsigned short *)(param_1 + 0x5e) * piVar12[7];
    iVar2 = ((iVar2 - piVar12[7]) + 1) * (unsigned int)*(unsigned short *)(param_1 + 0x5e);
    if (*(int *)(param_1 + 0xd4) < iVar3 + iVar2) {
      iVar2 = *(int *)(param_1 + 0xd4) - iVar3;
    }
    *(int *)(param_1 + 0xd4) = iVar2;
    *(int *)(param_1 + 0x48) = piVar12[3];
    *(int *)(param_1 + 0x4c) = piVar12[4];
    piVar12[9] = piVar12[2] - (unsigned int)*(unsigned short *)(param_1 + 0x5e) * piVar12[7];
    piVar12[8] = piVar12[1] + piVar12[6] * -0x10;
  }
  if (*(int *)(*(int *)(param_1 + 0xe0) + 0x30) != 0) {
    if (*(short *)(param_1 + 0x58) == 1) {
      return 0xffffffffffffffb9;
    }
    if ((*(unsigned short *)(param_1 + 0x3e) & 0x800) != 0) {
      return 0xffffffffffffffb8;
    }
    if ((*(unsigned short *)(param_1 + 0x3e) & 0xf0) == 0x40) {
      return 0xffffffffffffffba;
    }
  }
  if ((*(unsigned short *)(param_1 + 0x3e) & 0xf0) == 0x40) {
    if (*(short *)(param_1 + 0x5c) != 1) {
      return 0xffffffffffffffbe;
    }
    uVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xd4) & 0x7fffffff) << 1;
  }
  else {
    uVar5 = (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x5c) * (__int64)*(int *)(param_1 + 0xd4);
  }
  lVar10 = (uVar5 & 0x1ffffff) << 7;
  iVar2 = fn_8265C940(lVar10,0x24870000);
  *(int *)(param_1 + 0xc0) = iVar2;
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(param_1 + 0xe0) + 0x38) != 0) {
      iVar2 = fn_8265C940(lVar10,0x24870000);
      *(int *)(param_1 + 0xc4) = iVar2;
      if (iVar2 == 0) {
        return 0xffffffffffffffbf;
      }
    }
    iVar2 = fn_8265C940(*(int *)(param_1 + 0x30) << 2,0x24870000);
    *(int *)(param_1 + 0x70) = iVar2;
    if (iVar2 != 0) {
      iVar2 = fn_8265C940(*(int *)(param_1 + 0x30) << 2,0x24870000);
      *(int *)(param_1 + 0x74) = iVar2;
      if (iVar2 != 0) {
        iVar2 = 0;
        if (*(short *)(param_1 + 0x5c) != 0) {
          piVar12 = (int *)(param_1 + 0x7c);
          do {
            iVar3 = fn_8265C940(*(int *)(param_1 + 0xd4) << 1,0x24870000);
            *piVar12 = iVar3;
            if (iVar3 == 0) {
              return 0xffffffffffffffbf;
            }
            iVar2 = iVar2 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x5c));
        }
        uVar1 = *(unsigned short *)(param_1 + 0x5e);
        if ((*(unsigned short *)(param_1 + 0x3e) & 0xf0) == 0x40) {
          uVar5 = (unsigned __int64)uVar1 << 2;
        }
        else {
          uVar5 = (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x5c) * (__int64)(int)(unsigned int)uVar1;
        }
        iVar2 = fn_8265C940((unsigned __int64)uVar1 << 6,0x24870000);
        *(int *)(param_1 + 200) = iVar2;
        if (iVar2 != 0) {
          iVar2 = fn_8265C940((uVar5 & 0x3ffffff) << 6,0x24870000);
          *(int *)(param_1 + 0xcc) = iVar2;
          if (iVar2 != 0) {
            *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x2c);
            iVar2 = fn_8265C940((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) + 1,0x24870000);
            *(int *)(param_1 + 0x6c) = iVar2;
            if (iVar2 != 0) {
              iVar2 = *(int *)(param_1 + 0xe0);
              *(unsigned int *)(iVar2 + 0x5c) = 0;
              *(unsigned int *)(iVar2 + 0x60) = 0;
              *(unsigned int *)(iVar2 + 100) = 0;
              iVar2 = *(int *)(param_1 + 0xe0);
              if (*(int *)(iVar2 + 0x30) != 0) {
                iVar3 = 2;
                do {
                  if (iVar3 == 2) {
                    iVar8 = 0x3c;
                    do {
                      if (*(int *)(iVar2 + iVar8) != 0) goto LAB_82aabf6c;
                      iVar8 = iVar8 + 4;
                    } while (iVar8 < 0x45);
                  }
                  else if (*(int *)((iVar3 + 0xd) * 4 + iVar2) != 0) {
LAB_82aabf6c:
                    uVar4 = fn_8265C940(((__int64)
                                               (int)((unsigned int)*(unsigned short *)(param_1 + 0x5c) *
                                                    (*(int *)(param_1 + 0xd4) >> 2)) *
                                               (__int64)(*(int *)(param_1 + 0xd0) >> 2) &
                                              0x3fffffffU) << 2,0x24870000);
                    iVar8 = (iVar3 + 0x15) * 4;
                    *(unsigned int *)(iVar8 + *(int *)(param_1 + 0xe0)) = uVar4;
                    iVar2 = *(int *)(param_1 + 0xe0);
                    if (*(int *)(iVar8 + iVar2) == 0) {
                      return 0xffffffffffffffbf;
                    }
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < 5);
              }
              if (*(int *)(iVar2 + 0x30) != 0) {
                *(unsigned int *)(param_1 + 0xbc) = *(unsigned int *)(iVar2 + 0x5c);
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 0xffffffffffffffbf;
}


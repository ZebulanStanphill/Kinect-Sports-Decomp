extern int fn_8227DE10();
extern int fn_8227E950();
extern int fn_8227EA48();
extern int fn_8227EB10();
extern int fn_8227EBB0();
extern int fn_8227EC78();
extern int fn_8227F500();
extern int fn_8227F7B8();
extern int fn_82628520();
extern int fn_82F63CA0();
extern unsigned int lbl_832659D4;


/* WARNING: Removing unreachable block (ram,0x8227e1ec) */

void fn_8227DED0(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  if (param_2[0xe] != 0) {
    return;
  }
  if (lbl_832659D4 != '\0') {
    return;
  }
  if (param_2[0xf] != 0) {
    (**(int (***)())(*param_2 + 4))();
    param_2[0xf] = 0;
  }
  if ((param_3 & 0xffffffff) != 0) {
    (**(int (***)())(*param_2 + 0x14))(param_1,param_2,param_3);
  }
  piVar10 = param_2 + 7;
  iVar9 = param_2[8] - param_2[7] >> 3;
  if (iVar9 != 0) {
    uVar8 = 0;
    if (iVar9 != 0) {
      iVar9 = 0;
      do {
        piVar11 = (int *)(*piVar10 + iVar9);
        uVar6 = *(unsigned int *)(*piVar10 + iVar9);
        if (uVar6 == 0) {
          fn_82628520(param_2 + 3,piVar11 + 1);
        }
        else if (uVar6 == 1) {
          piVar12 = (int *)param_2[3];
          iVar5 = 0;
          if (piVar12 != (int *)param_2[4]) {
            do {
              iVar1 = *piVar12;
              if (*(int *)(iVar1 + 0x14) == piVar11[1]) {
                if (param_2[0xb] == iVar5) {
                  param_2[0xb] = -1;
                }
                else {
                  fn_8227E950(param_2,0,0xffffffffffffffff);
                }
                fn_82F63CA0(piVar12,piVar12 + 1,(param_2[4] - (int)(piVar12 + 1) >> 2) << 2);
                param_2[4] = param_2[4] + -4;
                fn_8227DE10(iVar1);
                break;
              }
              piVar12 = piVar12 + 1;
              iVar5 = iVar5 + 1;
            } while (piVar12 != (int *)param_2[4]);
          }
        }
        else if (uVar6 < 4) {
          uVar4 = 0;
          uVar2 = param_2[4] - param_2[3] >> 2;
          if (uVar2 != 0) {
            iVar5 = 0;
            do {
              iVar1 = *(int *)(param_2[3] + iVar5);
              if (*(int *)(iVar1 + 0x14) == piVar11[1]) {
                if ((uVar6 == 3) && (param_2[0xb] == uVar4)) {
                  fn_8227E950(param_2,param_3,0xffffffffffffffff);
                }
                uVar6 = *(unsigned int *)(iVar1 + 0x6c);
                if (*piVar11 == 2) {
                  if (((~(unsigned __int64)uVar6 & 0xffffffff) >> 1 & 1) == 0) {
                    uVar6 = uVar6 & 0xfffffffd;
LAB_8227e0d8:
                    *(unsigned int *)(iVar1 + 0x6c) = uVar6;
                  }
                }
                else if (((~(unsigned __int64)uVar6 & 0xffffffff) >> 1 & 1) != 0) {
                  uVar6 = uVar6 | 2;
                  goto LAB_8227e0d8;
                }
                if ((((~(unsigned __int64)*(unsigned int *)(iVar1 + 0x6c) & 0xffffffff) >> 1 & 1) == 0) ||
                   (uVar7 = 1, (~(unsigned __int64)*(unsigned int *)(iVar1 + 0x6c) & 1) == 0)) {
                  uVar7 = 0;
                }
                *(unsigned int *)(*(int *)(iVar1 + 0x70) + 0x34) = uVar7;
                break;
              }
              uVar4 = uVar4 + 1;
              iVar5 = iVar5 + 4;
            } while (uVar4 < uVar2);
          }
        }
        else if (uVar6 < 6) {
          uVar4 = 0;
          uVar2 = param_2[4] - param_2[3] >> 2;
          if (uVar2 != 0) {
            iVar5 = 0;
            do {
              iVar1 = *(int *)(param_2[3] + iVar5);
              if (*(int *)(iVar1 + 0x14) == piVar11[1]) {
                if ((uVar6 == 5) && (param_2[0xb] == uVar4)) {
                  fn_8227E950(param_2,param_3,0xffffffffffffffff);
                }
                fn_8227F7B8(iVar1,*piVar11 == 4);
                break;
              }
              uVar4 = uVar4 + 1;
              iVar5 = iVar5 + 4;
            } while (uVar4 < uVar2);
          }
        }
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 8;
      } while (uVar8 < (unsigned int)(param_2[8] - *piVar10 >> 3));
    }
    iVar9 = *piVar10;
    if (iVar9 != param_2[8]) {
      for (iVar5 = iVar9; iVar5 != param_2[8]; iVar5 = iVar5 + 8) {
      }
      param_2[8] = iVar9;
    }
  }
  iVar9 = param_2[0x13];
  if (iVar9 == 0) {
    return;
  }
  if (iVar9 == 1) {
    uVar3 = fn_8227EBB0(param_2);
    if ((unsigned __int64)(unsigned int)param_2[0xb] == (uVar3 & 0xffffffff)) {
      param_2[0x11] = 1;
LAB_8227e29c:
      uVar3 = 0xffffffffffffffff;
    }
  }
  else {
    if (iVar9 != 2) {
      if (iVar9 == 3) {
        fn_8227EA48(param_2);
      }
      goto LAB_8227e2d4;
    }
    uVar3 = fn_8227EC78(param_2);
    if ((unsigned __int64)(unsigned int)param_2[0xb] == (uVar3 & 0xffffffff)) {
      param_2[0x10] = 1;
      goto LAB_8227e29c;
    }
  }
  fn_8227E950(param_2,param_3,uVar3);
  if (param_2[0xb] != -1) {
    fn_8227F500(*(unsigned int *)(param_2[0xb] * 4 + param_2[3]));
    fn_8227EB10(param_2,100);
  }
LAB_8227e2d4:
  param_2[0x13] = 0;
  return;
}


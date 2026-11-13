extern int fn_82EFF450();
extern unsigned int lbl_82006848;
extern float lbl_820116D8;


void fn_82F000C0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar8;
  __int64 lVar7;
  __int64 lVar9;
  unsigned __int64 uVar10;
  
  iVar1 = *(int *)(param_1 + 0xaf0);
  uVar4 = (unsigned int)
          ((((0x27 - (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3) +
            (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xffffffff) << 3);
  *(unsigned int *)(param_1 + 0x1f08) = uVar4;
  if ((iVar1 == 1) || (*(__int64 *)(param_1 + 0x2e0) == 1)) {
    *(unsigned int *)(param_1 + 0x1f0c) = uVar4;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x1f08);
  if (uVar2 == 0) {
    *(unsigned int *)(param_1 + 0x1f58) = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1f44);
    if (*(int *)(param_1 + 0xb08) == 0) {
      iVar5 = *(int *)(param_1 + 0x76c0);
      if (iVar5 != 0) {
        uVar3 = *(unsigned int *)(param_1 + 0x1f00);
        uVar6 = 1000;
        iVar8 = 1;
        do {
          iVar5 = iVar5 + -1;
          if (uVar3 < uVar6) goto LAB_82f00178;
          iVar8 = iVar8 * 2;
          uVar6 = (iVar8 + 10) * 100;
        } while (iVar5 != 0);
        if (uVar3 < uVar6) {
LAB_82f00178:
          uVar6 = uVar3;
        }
        iVar8 = (int)((double)((float)uVar6 * lbl_82006848) * *(double *)(param_1 + 0x1ed0) *
                     lbl_820116D8);
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x1ec8) + uVar2;
    }
    uVar3 = *(unsigned int *)(param_1 + 0x1ec8);
    uVar10 = (unsigned __int64)uVar3;
    uVar6 = *(unsigned int *)(param_1 + 0x1f10);
    lVar9 = (uVar6 - uVar10) - (unsigned __int64)uVar2;
    if ((lVar9 < 0) ||
       ((((iVar1 != 1 && (iVar1 != 2)) && (iVar8 < (int)(uVar3 + uVar2))) ||
        (iVar5 = fn_82EFF450(param_1,uVar10 + uVar2), iVar5 == 0)))) {
      if ((*(int *)(param_1 + 0x1f38) == 0) ||
         ((*(int *)(param_1 + 0x1dac) != 1 && (*(int *)(param_1 + 0x1dac) != 0)))) {
        if (((iVar1 == 0) || (iVar1 == 4)) && ((-1 < (int)lVar9 && (iVar8 < (int)(uVar3 + uVar2)))))
        {
          *(int *)(param_1 + 0x76c0) = *(int *)(param_1 + 0x76c0) + 1;
          *(unsigned int *)(param_1 + 0x1f58) = 1;
          return;
        }
        *(unsigned int *)(param_1 + 0x76c0) = 0;
        *(unsigned int *)(param_1 + 0x1f58) = 1;
        return;
      }
      lVar7 = uVar10 + *(unsigned int *)(param_1 + 0x1f08);
      *(unsigned int *)(param_1 + 0x1f58) = 0;
      lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1f10) - lVar7;
      *(int *)(param_1 + 0x1f08) = (int)lVar7;
      *(int *)(param_1 + 0x1f10) = (int)lVar9;
      if (lVar9 < 0) {
        *(unsigned int *)(param_1 + 0x1f10) = 0;
      }
      if (*(int *)(param_1 + 0x1f10) < *(int *)(param_1 + 0x1f14)) {
        *(int *)(param_1 + 0x1f14) = *(int *)(param_1 + 0x1f10);
      }
    }
    else {
      iVar1 = uVar3 + *(int *)(param_1 + 0x1f08);
      *(unsigned int *)(param_1 + 0x1f58) = 0;
      iVar8 = uVar6 - iVar1;
      *(int *)(param_1 + 0x1f08) = iVar1;
      *(int *)(param_1 + 0x1f10) = iVar8;
      if (iVar8 < *(int *)(param_1 + 0x1f14)) {
        *(int *)(param_1 + 0x1f14) = iVar8;
        *(unsigned int *)(param_1 + 0x76c0) = 0;
        *(int *)(param_1 + 0x890) = (iVar1 >> 3) + *(int *)(param_1 + 0x890);
        return;
      }
    }
    *(unsigned int *)(param_1 + 0x76c0) = 0;
    *(int *)(param_1 + 0x890) = (*(int *)(param_1 + 0x1f08) >> 3) + *(int *)(param_1 + 0x890);
  }
  return;
}


typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82964628();
extern int fn_82BA02A8();
extern int fn_82F66570();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;


int fn_829520D8(int param_1,unsigned int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  double dVar12;
  
  uVar10 = *param_2;
  bVar4 = false;
  uVar3 = uVar10 & 0xfff00000;
  uVar9 = (unsigned __int64)uVar10 & 0xfffff;
  if (param_3 == 0) {
    if (uVar3 != 0x10f00000) {
      if (uVar3 == 0x73500000) {
        uVar11 = uVar9 | 0x73d00000;
      }
      else if (uVar3 == 0x73600000) {
        uVar11 = uVar9 | 0x73e00000;
      }
      else if (uVar3 == 0x73700000) {
        uVar11 = uVar9 | 0x73f00000;
      }
      else {
        if (uVar3 != 0x73800000) {
          return 0;
        }
        uVar11 = uVar9 | 0x74000000;
      }
      goto LAB_82952378;
    }
    uVar11 = uVar9 | 0x73100000;
    piVar1 = *(int **)(*(int *)(*(int *)(*(int *)param_2[2] * 4 + *(int *)(param_1 + 0x14)) + 4) * 4
                      + *(int *)(param_1 + 0x10));
    if ((((piVar1[1] & 0x208U) != 0) &&
        (((((*piVar1 == 0 || (iVar5 = fn_82F66570(*piVar1,0x69), iVar5 != 0)) ||
           (iVar5 = fn_82F66570(*piVar1,0x49), iVar5 != 0)) ||
          ((iVar5 = fn_82F66570(*piVar1,0x62), iVar5 != 0 ||
           (iVar5 = fn_82F66570(*piVar1,0x42), iVar5 != 0)))) || ((piVar1[1] & 0x800U) == 0)))) &&
       (*(int *)(*(int *)(*(int *)param_2[2] * 4 + *(int *)(param_1 + 0x14)) + 8) == -1))
    goto LAB_82952378;
    uVar11 = uVar9 | 0x73f00000;
  }
  else {
    if (uVar3 != 0x10f00000) {
      if (uVar3 == 0x73500000) {
        uVar11 = uVar9 | 0x73900000;
      }
      else if (uVar3 == 0x73600000) {
        uVar11 = uVar9 | 0x73a00000;
      }
      else if (uVar3 == 0x73700000) {
        uVar11 = uVar9 | 0x73b00000;
      }
      else {
        if (uVar3 != 0x73800000) {
          return 0;
        }
        uVar11 = uVar9 | 0x73c00000;
      }
      goto LAB_82952378;
    }
    uVar11 = uVar9 | 0x73000000;
    piVar1 = *(int **)(*(int *)(*(int *)(*(int *)param_2[2] * 4 + *(int *)(param_1 + 0x14)) + 4) * 4
                      + *(int *)(param_1 + 0x10));
    if ((((piVar1[1] & 0x208U) != 0) &&
        (((*piVar1 == 0 || (iVar5 = fn_82F66570(*piVar1,0x69), iVar5 != 0)) ||
         ((iVar5 = fn_82F66570(*piVar1,0x49), iVar5 != 0 ||
          (((iVar5 = fn_82F66570(*piVar1,0x62), iVar5 != 0 ||
            (iVar5 = fn_82F66570(*piVar1,0x42), iVar5 != 0)) || ((piVar1[1] & 0x800U) == 0))))))))
       && (*(int *)(*(int *)(*(int *)param_2[2] * 4 + *(int *)(param_1 + 0x14)) + 8) == -1))
    goto LAB_82952378;
    uVar11 = uVar9 | 0x73b00000;
  }
  bVar4 = true;
LAB_82952378:
  iVar5 = fn_82963998(0x74);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_829632A0();
  }
  if (iVar5 != 0) {
    if ((uVar3 != 0x10f00000) || (uVar8 = uVar9, bVar4)) {
      uVar8 = ((unsigned __int64)uVar10 & 0xfffff) << 1;
    }
    iVar6 = fn_82963A30(iVar5,uVar11,uVar8,uVar9,0);
    if ((-1 < iVar6) && (iVar6 = fn_829632F0(iVar5,param_2), -1 < iVar6)) {
      dVar12 = lbl_82005710;
      if (param_3 == 0) {
        uVar7 = fn_82964628(lbl_82005710,param_1,*(unsigned int *)(param_1 + 0xa8),0,0);
        **(unsigned int **)(iVar5 + 0x10) = uVar7;
        if (**(int **)(iVar5 + 0x10) == -1) {
          return 0;
        }
        iVar6 = *(int *)(*(int *)param_2[4] * 4 + *(int *)(param_1 + 0x14));
        iVar2 = *(int *)(**(int **)(iVar5 + 0x10) * 4 + *(int *)(param_1 + 0x14));
        *(unsigned int *)(iVar2 + 0x18) = *(unsigned int *)(iVar6 + 0x18);
        *(unsigned int *)(iVar2 + 0x14) = *(unsigned int *)(iVar6 + 0x14);
      }
      else {
        fn_82F68CC0(*(unsigned int *)(iVar5 + 0x10),param_2[4],param_2[3] << 2);
      }
      fn_82F68CC0(*(unsigned int *)(iVar5 + 8),param_2[2],param_2[1] << 2);
      if (!bVar4) {
        return iVar5;
      }
      uVar9 = 0;
      uVar10 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(iVar6 + *(int *)(param_1 + 0x14));
          if ((*(unsigned int *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
              != 0) {
            if (*(double *)(iVar2 + 0x20) == dVar12) {
              *(unsigned int *)(param_1 + 0x18c) = uVar10;
              break;
            }
            if ((uVar9 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(iVar2 + 0xc)) {
              uVar9 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc) + 1;
            }
          }
          uVar10 = uVar10 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar10 < *(unsigned int *)(param_1 + 8));
      }
      if (*(int *)(param_1 + 0x18c) == -1) {
        uVar7 = fn_82964628(dVar12,param_1,*(unsigned int *)(param_1 + 0x78),uVar9,0);
        *(unsigned int *)(param_1 + 0x18c) = uVar7;
      }
      if (*(int *)(param_1 + 0x18c) != -1) {
        *(int *)(*(int *)(iVar5 + 8) + 4) = *(int *)(param_1 + 0x18c);
        return iVar5;
      }
    }
    fn_82BA02A8(iVar5);
    fn_829639F0(iVar5);
  }
  return 0;
}


typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_110;
extern unsigned int *auStack_d0;
extern int fn_82A1DDC0();
extern int fn_83013E80();
extern int fn_8301BCA0();
extern int fn_8301BEA0();
extern int fn_8301CFE8();
extern int fn_83021D68();
extern int fn_83021E80();
extern int fn_83021FA0();
extern int fn_83037510();
extern int fn_83039958();
extern int fn_83039B20();
extern int fn_8303A720();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_83264308;


void fn_8301DA20(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned char auStack_110 [64];
  unsigned char auStack_d0 [112];
  
  if (param_2[6] != 0xffffffff) {
    fn_83013E80(lbl_83264308,
                      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xfc) + 8) + 0x50)
                      ,param_2 + 6,param_1);
  }
  uVar4 = (**(int (***)())(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 0xfc) + 8) + 0x30))();
  if (uVar4 != 0xffffffff) {
    if (uVar4 < *(unsigned short *)((int)param_2 + 0xe)) {
      *(short *)((int)param_2 + 0xe) = (short)uVar4;
    }
    *(unsigned char *)((int)param_2 + 0x353) = 1;
  }
  puVar9 = (unsigned int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) != 0) {
    if (0x400 < (unsigned int)*(unsigned short *)((int)param_2 + 0xe) + (unsigned int)*(unsigned short *)(param_1 + 0x22)) {
      *(unsigned short *)((int)param_2 + 0xe) = 0x400 - *(unsigned short *)(param_1 + 0x22);
    }
    uVar10 = 0;
    for (uVar4 = *(unsigned int *)(param_1 + 0x18); uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar10 = uVar10 + 1;
    }
    uVar4 = 0;
    if (uVar10 != 0) {
      do {
        fn_82A1DDC0(((__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x20) * (__int64)(int)uVar4 +
                           (unsigned __int64)*(unsigned short *)(param_1 + 0x22) & 0x3fffffff) * 4 +
                          (unsigned __int64)*puVar9,
                          ((__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 3) * (__int64)(int)uVar4 &
                          0x3fffffffU) * 4 + (unsigned __int64)*param_2,
                          (unsigned __int64)*(unsigned short *)((int)param_2 + 0xe) << 2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar10);
    }
    uVar4 = 0;
    iVar5 = *(int *)(param_1 + 0xc);
    *(short *)(param_1 + 0x22) = *(short *)(param_1 + 0x22) + *(short *)((int)param_2 + 0xe);
    uVar1 = *(unsigned int *)(*(int *)(iVar5 + 0xfc) + 8);
    if (*(short *)(param_1 + 0x24) != 0) {
      iVar7 = 0;
      do {
        uVar4 = uVar4 + 1;
        *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x28)) = uVar1;
        iVar7 = iVar7 + 0x14;
      } while (uVar4 < *(unsigned short *)(param_1 + 0x24));
    }
    fn_83021D68(param_2,(unsigned short *)(param_1 + 0x24),param_1 + 0x28);
    (**(int (***)())(*(int *)(iVar5 + 0xc0) + 8))(iVar5 + 0xc0);
    puVar9 = (unsigned int *)(param_1 + 0x10);
    param_2 = param_2 + -1;
    lVar11 = 10;
    do {
      puVar9 = puVar9 + 1;
      param_2 = param_2 + 1;
      *param_2 = *puVar9;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    return;
  }
  if (param_2[0xd0] == 0x11) {
    bVar3 = false;
    iVar5 = *(int *)(*(int *)(iVar5 + 0xfc) + 8);
    if ((*(unsigned int *)(*(int *)(iVar5 + 0x6c) + 0x24) >> 0xe == param_2[1]) &&
       (((*(unsigned char *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0xfc) + 8) + 0xda) ^
         *(unsigned char *)(iVar5 + 0xda)) & 2) == 0)) {
      iVar5 = fn_83037510(puVar9,*(unsigned short *)(param_2 + 3));
      if (iVar5 != 1) goto LAB_8301dc34;
      uVar10 = 0;
      for (uVar4 = *(unsigned int *)(param_1 + 0x18); uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
        uVar10 = uVar10 + 1;
      }
      uVar4 = 0;
      if (uVar10 != 0) {
        do {
          fn_82A1DDC0(((__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x20) * (__int64)(int)uVar4
                            & 0x3fffffffU) * 4 + (unsigned __int64)*puVar9,
                            ((__int64)(int)(unsigned int)*(unsigned short *)(param_2 + 3) * (__int64)(int)uVar4 &
                            0x3fffffffU) * 4 + (unsigned __int64)*param_2,
                            (unsigned __int64)*(unsigned short *)((int)param_2 + 0xe) << 2);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar10);
      }
      *(unsigned short *)(param_1 + 0x22) = *(unsigned short *)((int)param_2 + 0xe);
      *(unsigned short *)(param_1 + 0x24) = *(unsigned short *)(param_2 + 4);
      *(unsigned int *)(param_1 + 0x28) = param_2[5];
    }
    else {
      bVar3 = true;
      param_2[0xd0] = 0x2d;
    }
    iVar5 = *(int *)(param_1 + 0xc);
    (**(int (***)())(*(int *)(iVar5 + 0xc0) + 8))(iVar5 + 0xc0);
    fn_83039B20(iVar5 + 0x10,auStack_110);
    fn_83021FA0(iVar5 + 0xcc,auStack_d0);
    fn_8301CFE8(*(unsigned int *)(param_1 + 0xc),0);
    iVar5 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0xc) = iVar5;
    *(unsigned int *)(param_1 + 0x10) = 0;
    iVar7 = *(int *)(iVar5 + 0xfc);
    if ((*(unsigned char *)(iVar7 + 0xc) & 0x80) == 0) {
      iVar6 = fn_8301BCA0(param_1,iVar7);
      if (iVar6 == 1) {
        iVar6 = fn_8301BEA0(param_1,iVar5);
        if (iVar6 != 1) {
          param_2[0xd0] = 2;
          return;
        }
      }
      else {
        if (iVar6 == 0x3f) {
          param_2[0xd0] = 0x11;
          return;
        }
        if (iVar6 == 2) goto LAB_8301dc34;
      }
    }
    fn_8303A720(iVar7);
    piVar2 = *(int **)(iVar7 + 8);
    (**(int (***)())(*piVar2 + 0x24))(piVar2,param_1 + 0x160);
    fn_83039958(iVar5 + 0x10,auStack_110);
    uVar4 = fn_83021E80(iVar5 + 0xcc,auStack_d0);
    if (uVar4 == 1) {
      if (!bVar3) {
        if ((unsigned int)*(unsigned short *)(param_1 + 0x22) == (unsigned int)*(unsigned short *)(param_1 + 0x20)) {
          puVar9 = (unsigned int *)(param_1 + 0x10);
          puVar8 = param_2 + -1;
          lVar11 = 10;
          do {
            puVar9 = puVar9 + 1;
            puVar8 = puVar8 + 1;
            *puVar8 = *puVar9;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          param_2[0xd0] = 0x2d;
        }
        else {
          iVar5 = (unsigned int)*(unsigned short *)(param_1 + 0x20) - (unsigned int)*(unsigned short *)(param_1 + 0x22);
          if (piVar2[0x4d] < iVar5) {
            *param_2 = 0;
            *(unsigned short *)((int)param_2 + 0xe) = 0;
            *(unsigned short *)(param_2 + 4) = 0;
            param_2[2] = 0x2b;
            param_2[5] = 0;
            uVar4 = lbl_82002AE0;
            param_2[6] = 0xffffffff;
            param_2[7] = uVar4;
            param_2[8] = 0xffffffff;
            param_2[9] = 1;
            *(short *)(param_2 + 3) = (short)iVar5;
            param_2[0xd0] = 0x2b;
          }
          else {
            puVar9 = (unsigned int *)(param_1 + 0x10);
            piVar2[0x4d] = piVar2[0x4d] - iVar5;
            puVar8 = param_2 + -1;
            lVar11 = 10;
            do {
              puVar9 = puVar9 + 1;
              puVar8 = puVar8 + 1;
              *puVar8 = *puVar9;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            param_2[0xd0] = 0x2d;
          }
        }
      }
    }
    else {
      param_2[0xd0] = uVar4;
    }
  }
  else {
    if ((*(unsigned char *)(*(int *)(iVar5 + 0xfc) + 0xc) & 0x80) != 0) {
      return;
    }
    iVar5 = fn_8301BCA0(param_1);
    if (iVar5 != 1) {
      if (iVar5 != 2) {
        return;
      }
      param_2[0xd0] = 2;
      return;
    }
    iVar5 = fn_8301BEA0(param_1,*(unsigned int *)(param_1 + 0x10));
    if (iVar5 == 1) {
      return;
    }
LAB_8301dc34:
    param_2[0xd0] = 2;
  }
  return;
}


extern int fn_82C3F478();


void fn_82C36130(unsigned int *param_1,__int64 param_2,int param_3,__int64 param_4,
                  __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  
  iVar4 = (int)param_2;
  uVar1 = *(unsigned int *)(iVar4 + 0x1c8);
  uVar7 = (unsigned __int64)uVar1;
  uVar2 = *param_1;
  uVar3 = *(unsigned int *)(iVar4 + 0x1c4);
  uVar9 = (unsigned __int64)uVar3;
  if (-1 < (int)uVar1) {
    lVar6 = (__int64)((int)*(short *)(param_3 + 0x76) >> 1);
    if ((int)uVar3 < (int)uVar1) {
      uVar8 = lVar6 + uVar7;
      iVar5 = (int)uVar8;
      *(int *)(iVar4 + 0x1c4) = iVar5 - *(short *)(param_3 + 0x76);
      if (*(short *)(param_3 + 0x76) < iVar5) {
        uVar8 = (__int64)*(short *)(param_3 + 0x76);
      }
      goto LAB_82c361b0;
    }
    uVar7 = lVar6 + uVar7;
    if ((int)uVar3 < (int)uVar7) {
      uVar9 = uVar7;
    }
  }
  uVar7 = uVar9;
  *(int *)(iVar4 + 0x1c4) = (int)uVar7 - (int)*(short *)(param_3 + 0x76);
  uVar8 = uVar7;
  uVar9 = uVar7;
  if ((int)*(short *)(param_3 + 0x76) < (int)uVar7) {
    uVar7 = (unsigned __int64)*(short *)(param_3 + 0x76);
    uVar8 = uVar7;
    uVar9 = uVar7;
  }
LAB_82c361b0:
  if (*(int *)(iVar4 + 0x1c4) < 0) {
    *(unsigned int *)(iVar4 + 0x1c4) = 0;
  }
  lVar6 = (__int64)*(short *)(iVar4 + 0xb6) + -1;
  if (-1 < lVar6) {
    lVar10 = lVar6 * 0x38 + param_2 + 200;
    do {
      if (0 < (int)uVar9) {
        fn_82C3F478(uVar2,lVar10,1);
        (*(int (**)())param_1[0x35])(uVar2,lVar10,param_4,uVar9);
        fn_82C3F478(uVar2,lVar10,0);
      }
      if ((int)uVar9 < (int)uVar7) {
        (*(int (**)())param_1[0x35])(uVar2,lVar10,(uVar9 & 0x3fffffff) * 4 + param_4,uVar7 - uVar9);
      }
      if ((int)uVar7 < (int)uVar8) {
        fn_82C3F478(uVar2,lVar10,1);
        (*(int (**)())param_1[0x35])(uVar2,lVar10,(uVar7 & 0x3fffffff) * 4 + param_4,uVar8 - uVar7);
        fn_82C3F478(uVar2,lVar10,0);
      }
      if ((int)uVar8 < (int)param_5) {
        (*(int (**)())param_1[0x35])(uVar2,lVar10,(uVar8 & 0x3fffffff) * 4 + param_4,param_5 - uVar8);
      }
      lVar6 = lVar6 + -1;
      lVar10 = lVar10 + -0x38;
    } while (-1 < lVar6);
  }
  return;
}


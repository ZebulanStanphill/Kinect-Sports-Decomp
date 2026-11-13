extern int fn_82975B00();


unsigned __int64 fn_8299D240(unsigned __int64 param_1,int *param_2,unsigned int param_3,int *param_4,unsigned int *param_5)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  if ((param_2 == (int *)0x0) || (uVar6 = 0, param_3 == 0)) {
    return 0;
  }
LAB_8299d260:
  piVar1 = (int *)*param_2;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    uVar7 = 0;
    if (piVar1[3] != 0) {
      iVar3 = 0;
      do {
        uVar2 = 0;
        if (*param_5 != 0) {
          piVar5 = param_4;
          do {
            if (*(int *)(piVar1[4] + iVar3) == *piVar5) {
              uVar7 = 0;
              iVar3 = 0;
              goto LAB_8299d2e4;
            }
            uVar2 = uVar2 + 1;
            piVar5 = piVar5 + 1;
          } while (uVar2 < *param_5);
        }
        uVar7 = uVar7 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar7 < (unsigned int)piVar1[3]);
    }
  }
  goto LAB_8299d360;
LAB_8299d2e4:
  do {
    uVar2 = *param_5;
    uVar4 = 0;
    if (uVar2 != 0) {
      piVar5 = param_4;
      do {
        if (*piVar5 == *(int *)(piVar1[4] + iVar3)) break;
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar4 < *param_5);
    }
    if (uVar4 == uVar2) {
      if (uVar4 == 0x20) {
        fn_82975B00(param_1,0,0x12c3,0xffffffff8205137c);
        return 0xffffffff80004005;
      }
      param_4[uVar2] = *(int *)(piVar1[4] + iVar3);
      *param_5 = *param_5 + 1;
    }
    uVar7 = uVar7 + 1;
    iVar3 = iVar3 + 4;
  } while (uVar7 < (unsigned int)piVar1[3]);
LAB_8299d360:
  uVar6 = uVar6 + 1;
  param_2 = param_2 + 1;
  if (param_3 <= uVar6) {
    return 0;
  }
  goto LAB_8299d260;
}


extern int fn_8278D368();
extern int fn_82790270();


void fn_827A5F20(unsigned __int64 param_1,int *param_2,int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  
  iVar1 = 0;
  if ((*(int *)*param_3 != 2) || (iVar1 = 1, 1 < (unsigned int)param_3[1])) {
    piVar3 = (int *)*param_3 + iVar1 * 3;
    iVar1 = *piVar3;
    if ((iVar1 == 0) || ((iVar1 == 1 && (2 < (unsigned int)piVar3[2])))) {
      uVar4 = (unsigned __int64)(unsigned int)piVar3[1];
      uVar6 = (unsigned __int64)(unsigned int)piVar3[2];
      if (iVar1 == 1) {
        uVar4 = uVar4 + 2;
        uVar6 = uVar6 - 2;
      }
      uVar2 = uVar6;
      if (5 < (uVar6 & 0xffffffff)) {
        uVar2 = 6;
      }
      iVar1 = fn_82790270(uVar4,0xffffffff821ae24c,uVar2);
      if (iVar1 == 0) {
        uVar5 = 0;
        if (param_2[1] != 0) {
          iVar1 = 0;
          do {
            fn_8278D368(*(unsigned int *)(iVar1 + *param_2),0);
            uVar5 = uVar5 + 1;
            iVar1 = iVar1 + 4;
          } while (uVar5 < (unsigned int)param_2[1]);
        }
      }
      else {
        if (5 < (uVar6 & 0xffffffff)) {
          uVar6 = 6;
        }
        iVar1 = fn_82790270(uVar4,0xffffffff82011774,uVar6);
        if ((iVar1 == 0) && (uVar5 = 0, param_2[1] != 0)) {
          iVar1 = 0;
          do {
            fn_8278D368(*(unsigned int *)(iVar1 + *param_2),1);
            uVar5 = uVar5 + 1;
            iVar1 = iVar1 + 4;
          } while (uVar5 < (unsigned int)param_2[1]);
        }
      }
    }
  }
  return;
}


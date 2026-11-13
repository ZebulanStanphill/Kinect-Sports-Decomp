extern int fn_82CEA160();


void fn_82CEA520(int *param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  uVar5 = (unsigned __int64)(unsigned int)param_1[2] + 1;
  iVar3 = (**(int (***)())(*param_2 + 4))(param_2,(param_3 & 0x1fffffff) << 3);
  *param_1 = iVar3;
  iVar3 = (int)param_3;
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      *(unsigned int *)(iVar4 + *param_1) = 0xffffffff;
      iVar4 = iVar4 + 8;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  param_1[2] = iVar3 + -1;
  param_1[1] = 0;
  uVar6 = uVar5;
  piVar7 = piVar2;
  if (0 < (int)uVar5) {
    do {
      if (*piVar7 != -1) {
        fn_82CEA160(param_1,param_2,*piVar7,piVar7[1]);
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  if ((uVar1 & 0x80000000) == 0) {
    (**(int (***)())(*param_2 + 8))(param_2,piVar2,(uVar5 & 0x1fffffff) << 3);
  }
  return;
}


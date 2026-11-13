extern int fn_82F80110();
extern int fn_82F812C0();


__int64 fn_82F69650(unsigned __int64 param_1,int param_2,int param_3,unsigned int *param_4,int *param_5,
                      unsigned int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 0xc);
  iVar7 = 0;
  iVar2 = fn_82F80110(param_2,*param_6);
  if (iVar8 == 0) {
    fn_82F812C0();
  }
  *param_5 = -1;
  *param_4 = 0xffffffff;
  iVar3 = iVar8;
  if (iVar8 != 0) {
    iVar5 = iVar8 * 0x14;
    do {
      iVar1 = iVar5 + *(int *)(param_2 + 0x10);
      if ((*(int *)(iVar1 + -0x10) < iVar2) && (iVar2 <= *(int *)(iVar1 + -0xc))) break;
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + -0x14;
    } while (iVar3 != 0);
  }
  if (iVar3 != 0) {
    iVar7 = iVar3 * 0x14 + *(int *)(param_2 + 0x10) + -0x14;
  }
  uVar4 = 0;
  if (iVar8 != 0) {
    iVar2 = 0;
    do {
      piVar6 = (int *)(*(int *)(param_2 + 0x10) + iVar2);
      if ((((iVar7 == 0) || ((*(int *)(iVar7 + 4) < *piVar6 && (piVar6[1] <= *(int *)(iVar7 + 8)))))
          && (*piVar6 <= param_3)) && (param_3 <= piVar6[1])) {
        if (*param_4 == 0xffffffff) {
          *param_4 = uVar4;
        }
        *param_5 = uVar4 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x14;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (*param_4 != 0xffffffff) {
      return (unsigned __int64)*param_4 * 0x14 + (unsigned __int64)*(unsigned int *)(param_2 + 0x10);
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  return 0;
}


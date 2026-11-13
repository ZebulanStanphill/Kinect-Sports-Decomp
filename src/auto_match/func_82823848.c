extern int fn_82823728();


unsigned __int64 fn_82823848(int param_1,int *param_2,unsigned int param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned char *puVar6;
  unsigned __int64 uVar4;
  
  if ((unsigned int)param_2[6] < *param_5 + 5U) {
    return 1;
  }
  iVar2 = (int)param_4;
  if ((*(int *)*param_2 < 1) ||
     (iVar5 = *(int *)*param_2 * 5 + param_1, *(unsigned char *)(iVar5 + -5) != param_3)) {
    if ((param_3 == 1) || (uVar3 = 0, param_3 == 2)) {
      uVar3 = param_4;
    }
    uVar3 = fn_82823728(param_1,param_2,uVar3,param_5);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    puVar6 = (unsigned char *)(*(int *)*param_2 * 5 + param_1);
    *puVar6 = (char)param_3;
    *(int *)(puVar6 + 1) = iVar2;
    *(int *)*param_2 = *(int *)*param_2 + 1;
    *param_5 = *param_5 + 5;
  }
  else {
    *(int *)(iVar5 + -4) = *(int *)(iVar5 + -4) + iVar2;
  }
  if (param_3 == 0) {
    uVar1 = param_2[7];
    uVar4 = (unsigned __int64)(unsigned int)param_2[8] - (unsigned __int64)uVar1;
    if (0 < (__int64)uVar4) {
      if ((uVar4 & 0xffffffff) < (unsigned __int64)(unsigned int)param_2[10]) {
        uVar4 = (unsigned __int64)(unsigned int)param_2[10];
      }
      param_2[10] = (int)uVar4;
    }
    param_2[8] = param_2[8] + iVar2;
  }
  else {
    if (param_3 == 1) {
      *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + iVar2;
      param_2[7] = param_2[7] + iVar2;
      param_2[8] = param_2[8] + iVar2;
      return 0;
    }
    if (param_3 < 3) {
      *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + iVar2;
      param_2[8] = param_2[8] + iVar2;
      return 0;
    }
    if (param_3 != 3) {
      return 0;
    }
    uVar1 = param_2[7];
  }
  param_2[7] = uVar1 + iVar2;
  return 0;
}


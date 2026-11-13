extern int fn_82CEA220();


int fn_82E0E240(int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *param_1;
  puVar2 = (unsigned int *)(iVar3 + param_3 * 8);
  iVar5 = puVar2[1];
  if (iVar5 == -1) {
    iVar3 = fn_82CEA220(param_1 + 3);
    iVar3 = iVar3 * 8 + param_1[3];
    iVar5 = *(int *)(iVar3 + 4);
    iVar6 = -1;
    if (iVar5 == param_3) {
      *(unsigned int *)(iVar3 + 4) = 0xffffffff;
      iVar5 = param_3;
    }
    else {
      iVar4 = iVar5 * 8 + *param_1;
      iVar1 = *(int *)(iVar4 + 4);
      if (iVar1 == param_3) {
        *(unsigned int *)(iVar4 + 4) = 0xffffffff;
        iVar5 = param_3;
      }
      else {
        *(int *)(iVar3 + 4) = iVar1;
        *(unsigned int *)(*param_1 + param_3 * 8) = *(unsigned int *)(iVar5 * 8 + *param_1);
      }
    }
  }
  else {
    *puVar2 = *(unsigned int *)(iVar5 * 8 + iVar3);
    puVar2[1] = *(unsigned int *)(iVar5 * 8 + iVar3 + 4);
    iVar6 = param_3;
  }
  *(int *)(iVar5 * 8 + *param_1 + 4) = param_1[6];
  param_1[6] = iVar5;
  return iVar6;
}


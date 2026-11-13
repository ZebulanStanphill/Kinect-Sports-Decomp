extern int fn_82694610();


int * fn_82710118(int *param_1,unsigned int *param_2,__int64 param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar5;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  lVar3 = param_3;
  if (param_4 == 0) {
    do {
      pcVar5 = (char *)lVar3;
      lVar3 = lVar3 + 1;
    } while (*pcVar5 != '\0');
    uVar4 = (lVar3 - param_3) - 1U & 0xffffffff;
  }
  else {
    uVar4 = (unsigned __int64)param_4 - param_3;
  }
  if ((int)((int)((uVar4 & 0xffffffff) >> 0x1f) - 1U & (unsigned int)uVar4) < 1) {
    iVar2 = *(int *)(*param_2 + 8);
  }
  else {
    iVar2 = fn_82694610((unsigned __int64)*param_2 + 0x254,param_3);
  }
  iVar1 = *(int *)(iVar2 + 8);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = iVar1 + 1;
  return param_1;
}


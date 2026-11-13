extern int fn_82FFF250();


int * fn_82FFF348(int *param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  iVar1 = *(int *)param_3[2];
  iVar2 = *param_3;
  uVar4 = param_3[1];
  iVar3 = param_3[3];
  param_1[2] = iVar1;
  *param_1 = iVar2;
  param_1[1] = uVar4;
  param_1[3] = iVar3;
  while (iVar1 == 0) {
    uVar4 = uVar4 + 1;
    param_1[1] = uVar4;
    if (0xc0 < uVar4) break;
    param_1[3] = 0;
    iVar1 = *(int *)(uVar4 * 4 + iVar2);
    param_1[2] = iVar1;
  }
  fn_82FFF250(param_2);
  return param_1;
}


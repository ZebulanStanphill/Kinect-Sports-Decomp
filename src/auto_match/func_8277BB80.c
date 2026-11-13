unsigned __int64 fn_8277BB80(unsigned int *param_1,int (**param_2)())

{
  int iVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  int iVar4;
  __int64 lVar5;
  
  *(unsigned char *)(param_1 + 8) = 0;
  if ((unsigned __int64)(unsigned int)param_1[2] == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = param_1[1];
    lVar5 = (unsigned __int64)(unsigned int)param_1[2] - 1;
    iVar4 = iVar1 + 1;
    param_1[2] = (int)lVar5;
    param_1[1] = iVar4;
    param_1[5] = param_1[6];
    param_1[4] = iVar1 * 0xc + *(int *)*param_1;
    if (lVar5 == 0) {
      uVar3 = param_1[3];
    }
    else {
      uVar3 = *(unsigned int *)(iVar4 * 0xc + *(int *)*param_1 + 8);
    }
    param_1[6] = uVar3;
    uVar3 = (*param_2)(param_1[4]);
    param_1[7] = uVar3;
    uVar2 = 1;
  }
  return uVar2;
}


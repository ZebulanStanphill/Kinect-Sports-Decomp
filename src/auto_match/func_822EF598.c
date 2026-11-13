extern int fn_822EF538();


unsigned __int64 fn_822EF598(int *param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char *pbVar3;
  
  if (*(int *)param_1[8] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)param_1[0xc];
  }
  if (iVar2 < 2) {
    uVar1 = fn_822EF538(param_1);
    if ((int)uVar1 == -1) {
      return uVar1;
    }
    if (*(int *)param_1[8] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)param_1[0xc];
    }
    if (iVar2 < 1) {
      uVar1 = (**(int (***)())(*param_1 + 0x18))(param_1);
      return uVar1;
    }
    pbVar3 = *(unsigned char **)param_1[8];
  }
  else {
    *(int *)param_1[0xc] = *(int *)param_1[0xc] + -1;
    pbVar3 = (unsigned char *)(*(int *)param_1[8] + 1);
    *(int *)param_1[8] = (int)pbVar3;
  }
  return (unsigned __int64)*pbVar3;
}


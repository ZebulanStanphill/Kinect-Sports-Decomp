__int64 fn_82587BE8(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned char *pbVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  pbVar2 = (unsigned char *)*param_1;
  uVar3 = (unsigned __int64)*pbVar2;
  uVar4 = (unsigned __int64)*(unsigned char *)*param_2;
  if (uVar3 == uVar4) {
    iVar1 = (int)*param_2 - (int)pbVar2;
    do {
      pbVar2 = pbVar2 + 1;
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = (unsigned __int64)*pbVar2;
      uVar4 = (unsigned __int64)pbVar2[iVar1];
    } while (uVar3 == uVar4);
  }
  return uVar3 - uVar4;
}


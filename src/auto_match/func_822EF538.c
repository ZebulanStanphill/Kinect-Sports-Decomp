unsigned __int64 fn_822EF538(int *param_1)

{
  unsigned char *pbVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if (*(int *)param_1[8] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)param_1[0xc];
  }
  if (0 < iVar3) {
    *(int *)param_1[0xc] = *(int *)param_1[0xc] + -1;
    pbVar1 = *(unsigned char **)param_1[8];
    *(unsigned char **)param_1[8] = pbVar1 + 1;
    return (unsigned __int64)*pbVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x822ef594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(int (***)())(*param_1 + 0x1c))();
  return uVar2;
}


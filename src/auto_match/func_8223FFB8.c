unsigned __int64 fn_8223FFB8(int *param_1,unsigned char param_2)

{
  unsigned char *pbVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if (*(int *)param_1[9] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)param_1[0xd];
  }
  if (0 < iVar3) {
    *(int *)param_1[0xd] = *(int *)param_1[0xd] + -1;
    pbVar1 = *(unsigned char **)param_1[9];
    *(unsigned char **)param_1[9] = pbVar1 + 1;
    *pbVar1 = param_2;
    return (unsigned __int64)param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x82240024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(int (***)())(*param_1 + 0xc))(param_1,param_2);
  return uVar2;
}


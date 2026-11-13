unsigned __int64 fn_82EED7E0(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if (param_1[0x1d] == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)param_1 + *(int *)(param_1[1] + 4) + 8);
  if ((iVar1 != 3) && (iVar1 != 1)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x82eed824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(int (***)())(*param_1 + 0xc))(param_1);
  return uVar2;
}


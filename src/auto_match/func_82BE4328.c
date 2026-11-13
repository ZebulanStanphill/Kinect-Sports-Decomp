int fn_82BE4328(int param_1,unsigned int *param_2,int param_3)

{
  int uVar1;
  
  if ((param_2 != (int *)0x0) && (*param_2 == 0)) {
    return 1;
  }
  if (*(int (**)())(param_1 + 0xc4) != (int (*)())0x0) {
                    /* WARNING: Could not recover jumptable at 0x82be4364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(int (**)())(param_1 + 0xc4))(param_2,param_3,*(unsigned int *)(param_1 + 0xcc));
    return uVar1;
  }
  return 0;
}


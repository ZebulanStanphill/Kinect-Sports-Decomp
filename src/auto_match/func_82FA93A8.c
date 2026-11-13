int fn_82FA93A8(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x82fa93fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(int (**)())**(unsigned int **)*param_3)((unsigned int *)*param_3,param_4);
    return iVar1;
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x10) != '\0') {
    iVar1 = *(int *)(param_1 + 4);
    *param_4 = *(unsigned int *)(iVar1 + 0xc);
    return iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x82fa93e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(int (***)())(**(int **)(param_1 + 4) + 0xc))();
  return iVar1;
}


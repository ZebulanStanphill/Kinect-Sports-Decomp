void fn_82C0D850(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = param_2;
  if (iVar1 == param_2) {
    return;
  }
  if (*(int (***)())(param_1 + 0x40) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82c0d874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 0x40))(*(unsigned int *)(param_1 + 0x50));
  return;
}


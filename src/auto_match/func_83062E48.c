void fn_83062E48(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  param_2 = *(unsigned int *)(param_1 + 0xc) & param_2;
  if (param_2 == 0) {
    return;
  }
  if (*(int (***)())(param_1 + 4) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x83062e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 4))(param_1,*(unsigned int *)(param_1 + 8),param_2,param_3);
  return;
}


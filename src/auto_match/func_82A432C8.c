void fn_82A432C8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x38);
  if (puVar1 == (unsigned int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82a432e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())*puVar1)(puVar1,param_3);
  return;
}


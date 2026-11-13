void fn_8226A0E0(int param_1)

{
  if (*(int (***)())(param_1 + 0xc) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8226a0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 0xc))(*(unsigned int *)(param_1 + 4));
  return;
}


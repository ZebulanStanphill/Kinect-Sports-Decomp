void png_warning(int param_1)

{
  if (*(int (***)())(param_1 + 0x544) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x829ab138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 0x544))();
  return;
}


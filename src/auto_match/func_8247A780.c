void fn_8247A780(int param_1)

{
  if (*(int *)(param_1 + 0x20cc) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8247a79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*(int *)(param_1 + 0x2088) + 0x10))(param_1 + 0x2088);
  return;
}


void fn_82E12488(int param_1)

{
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82e124a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18));
  return;
}


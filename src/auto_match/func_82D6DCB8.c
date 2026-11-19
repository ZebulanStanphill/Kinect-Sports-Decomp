void fn_82D6DCB8(int self)

{
  if (*(int **)(self + 0x10) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82d6dcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(**(int **)(self + 0x10) + 0x30))(*(int **)(self + 0x10));
  return;
}


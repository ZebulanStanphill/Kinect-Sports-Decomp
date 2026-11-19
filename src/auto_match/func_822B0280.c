void fn_822B0280(int *self)

{
  if (self == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x822b0298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*self + 8))(self,1);
  return;
}


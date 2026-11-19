void fn_82D74A18(unsigned int *self)

{
  if (self == (unsigned int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82d74a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*self)(self,1);
  return;
}


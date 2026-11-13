extern int (*lbl_8320A638)();


void fn_8281C428(void)

{
  if (lbl_8320A638 == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8281c440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*lbl_8320A638)();
  return;
}


extern int (*lbl_83223C5C)();
extern unsigned int lbl_83223C64;


void fn_82AB1870(unsigned int param_1)

{
  if ((param_1 & 0xffffffff) == 0) {
    return;
  }
  if (lbl_83223C5C == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82ab189c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*lbl_83223C5C)(lbl_83223C64,param_1);
  return;
}


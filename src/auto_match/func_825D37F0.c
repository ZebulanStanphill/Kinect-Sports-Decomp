extern int fn_8251E4D0();
extern int fn_825D50C0();
extern unsigned int lbl_821C9828;


void fn_825D37F0(unsigned int *param_1)

{
  *param_1 = &lbl_821C9828;
  if (param_1[0x31] != 0) {
                    /* WARNING: Subroutine does not return */
    fn_8251E4D0((unsigned __int64)*(unsigned int *)(param_1[0xf] + 0xb8) + 8);
  }
  if (param_1[0x32] != 0) {
                    /* WARNING: Subroutine does not return */
    fn_8251E4D0((unsigned __int64)*(unsigned int *)(param_1[0xf] + 0xb8) + 8);
  }
  fn_825D50C0(param_1);
  return;
}


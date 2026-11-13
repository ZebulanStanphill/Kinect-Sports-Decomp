extern int fn_82A1EFC0();
extern unsigned int lbl_821C5F0C;


void fn_82581038(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  *param_1 = &lbl_821C5F0C;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 2,0,0x7c);
}


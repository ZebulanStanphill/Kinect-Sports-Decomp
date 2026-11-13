extern int fn_82A1EFC0();
extern unsigned int lbl_821BEA4C;


void fn_8248AFA8(unsigned int *param_1)

{
  param_1[0xb] = 0x140;
  param_1[0xc] = 0x100;
  param_1[0xd] = 0x140;
  *param_1 = &lbl_821BEA4C;
  param_1[0xe] = 0x100;
  param_1[0x16] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x11,0,0x14);
}


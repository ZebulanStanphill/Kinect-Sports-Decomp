extern int fn_828AAAA0();
extern int fn_82A1EFC0();
extern unsigned int lbl_82197CE0;
extern unsigned int lbl_82197CE8;
extern unsigned int lbl_82197D3C;


void fn_8224CA90(unsigned int *param_1)

{
  fn_828AAAA0();
  param_1[0x1c] = &lbl_82197CE0;
  param_1[0x1f] = 0;
  param_1[0x1e] = param_1 + 0x1d;
  param_1[0x1d] = param_1 + 0x1d;
  *param_1 = &lbl_82197CE8;
  param_1[0x20] = 0;
  param_1[0x1c] = &lbl_82197D3C;
  param_1[0x11c] = 0;
  *(unsigned char *)(param_1 + 0x11d) = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x22,0,1000);
}


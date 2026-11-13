extern int fn_82A8BB10();
extern int fn_82F691F0();
extern unsigned int lbl_820D1738;
extern unsigned int lbl_820D1758;


void fn_82A8BBF8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  *param_1 = &lbl_820D1758;
  param_1[2] = &lbl_820D1738;
  param_1[1] = 1;
  param_1[3] = 0x8000000a;
  fn_82A8BB10(param_1 + 0xb);
  param_1[0x166f] = param_3;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 4,0,0x1c);
}


extern int fn_82366908();
extern int XMemSet();
extern unsigned int lbl_821B51E8;


void fn_8239E110(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  fn_82366908(param_1,param_3,0xffffffff821b51d4);
  param_1[0x90] = param_2;
  param_1[0xa3] = 0;
  *param_1 = &lbl_821B51E8;
                    /* WARNING: Subroutine does not return */
  XMemSet(param_1 + 0x91,0,0x3c);
}


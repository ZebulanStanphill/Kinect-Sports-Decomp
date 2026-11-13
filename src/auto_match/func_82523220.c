extern int fn_8252DAB8();
extern int fn_82A1EFC0();
extern unsigned int lbl_821C2FA8;


void fn_82523220(unsigned int *param_1,unsigned __int64 param_2,unsigned char param_3)

{
  int iVar1;
  
  iVar1 = fn_8252DAB8();
  *(unsigned char *)(iVar1 + 0xb64) = param_3;
  *param_1 = &lbl_821C2FA8;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(iVar1 + 0x9cc,0,0x24);
}


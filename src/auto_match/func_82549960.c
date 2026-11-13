extern int fn_8252DAB8();
extern int fn_82F691F0();
extern unsigned int lbl_821C4C08;


void fn_82549960(unsigned int *param_1)

{
  __int64 lVar1;
  
  lVar1 = fn_8252DAB8();
  *param_1 = &lbl_821C4C08;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar1 + 0xd0,0,0x4c);
}


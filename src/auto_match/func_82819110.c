extern int fn_828222B8();
extern int fn_82F691F0();
extern int iRam8320a5e4;
extern unsigned int lbl_8320A5E8;


void fn_82819110(unsigned __int64 param_1)

{
  if (iRam8320a5e4 == 0) {
    fn_828222B8(0xffffffff8320a5dc);
    iRam8320a5e4 = 1;
    lbl_8320A5E8 = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,0x7c);
}


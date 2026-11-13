extern int fn_82819110();
extern int fn_82A1F248();
extern int fn_82F691F0();
extern unsigned int lbl_8320A5F8;
extern unsigned int lbl_8320A630;


void fn_8281B210(unsigned int *param_1,unsigned short param_2,int param_3,int param_4,__int64 param_5,
                  __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82A1F248(param_3);
  if ((uVar1 & 0x600) != 0) {
    *param_1 = 0;
    return;
  }
  if (lbl_8320A630 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(0xffffffff8320a5f8,0,0x38);
  }
  if ((param_7 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_5,0xee,param_6 - param_5);
  }
  fn_82819110(param_3,param_6 - param_5,param_7);
  *(unsigned char **)(param_3 + 0x10) = &lbl_8320A5F8;
  *(int *)(param_3 + 0x7c) = param_3 + 0x10c;
  *(unsigned short *)(param_3 + 0x82) = 0;
  *(unsigned short *)(param_3 + 0x84) = 0;
  *(unsigned short *)(param_3 + 0x80) = param_2;
  *(unsigned short *)(param_3 + 0x108) = 0xffff;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_3 + 0x10c,0,(param_4 - param_3) + -0x10c);
}


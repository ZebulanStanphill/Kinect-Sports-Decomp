extern int fn_824F4A78();
extern int fn_82522D98();
extern int fn_8265C9E0();
extern int fn_82F6A528();


void fn_824F2618(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  fn_82F6A528();
  uVar1 = fn_8265C9E0(0x28);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_824F4A78(uVar1,param_3);
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}


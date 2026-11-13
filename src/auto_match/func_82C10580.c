extern int fn_8265C940();
extern int fn_82F691F0();


unsigned __int64 fn_82C10580(void)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_8265C940(0x7f8,0x208c8000);
  if ((uVar1 & 0xffffffff) == 0) {
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0,0x7f8);
}


extern int fn_8265C940();
extern int fn_82F691F0();


unsigned __int64 fn_829E5870(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_8265C940(0x464,0x209d0000);
  *param_1 = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,100);
  }
  return 0xffffffff8007000e;
}


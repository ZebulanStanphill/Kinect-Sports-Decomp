extern int fn_8265C940();
extern int fn_82F691F0();


unsigned __int64 fn_82647308(void)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *in_r8;
  
  *in_r8 = 0;
  iVar2 = fn_8265C940(0x5f80,0x24800000);
  if (iVar2 != 0) {
    uVar1 = iVar2 + 0x83U & 0xffffff80;
    *(int *)(uVar1 - 4) = iVar2;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x5f00);
  }
  return 0xffffffff8007000e;
}


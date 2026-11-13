extern int fn_82C53960();
extern int fn_82F691F0();


unsigned __int64 fn_82C498F8(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82C53960(0x304,0);
  if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x304);
  }
  *param_1 = 0;
  return 0xfffffffffffffff7;
}


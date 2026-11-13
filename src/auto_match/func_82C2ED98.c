extern int fn_82C2B580();
extern int fn_82F691F0();


unsigned __int64 fn_82C2ED98(unsigned int *param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  
  *param_1 = 0;
  uVar1 = fn_82C2B580(param_2 * 0x98);
  *param_1 = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0,param_2 * 0x98);
}


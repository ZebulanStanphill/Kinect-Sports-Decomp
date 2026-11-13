extern int fn_8265C940();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82ac6350) */

unsigned __int64 fn_82AC6208(int param_1)

{
  __int64 lVar1;
  
  if ((param_1 != 0) && (lVar1 = fn_8265C940(0x100d0,0x24870000), lVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar1,0,0x100d0);
  }
  return 0;
}


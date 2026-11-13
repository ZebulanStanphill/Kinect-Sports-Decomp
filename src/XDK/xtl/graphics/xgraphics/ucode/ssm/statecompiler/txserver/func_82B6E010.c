extern int fn_82AB15D0();
extern int fn_82F691F0();


unsigned __int64 fn_82B6E010(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da2c0,0xffffffff820da230,0x11d);
  }
  if (3 < param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da294,0xffffffff820da230,0x11e);
    return 0x19;
  }
  iVar2 = param_2 * 0x2c + param_1;
  if ((*(int *)(iVar2 + 0x14c) != 0) &&
     (iVar1 = (**(int (***)())(param_1 + 0x1f8))(*(unsigned int *)(param_1 + 0x1e8),iVar2 + 0x13c),
     iVar1 != 0)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da230,299);
  }
  if ((*(int *)(iVar2 + 0x150) != 0) &&
     (iVar1 = (**(int (***)())(param_1 + 0x1f0))(*(unsigned int *)(param_1 + 0x1e8)), iVar1 != 0)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da230,0x134);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(iVar2 + 0x128,0,0x2c);
}


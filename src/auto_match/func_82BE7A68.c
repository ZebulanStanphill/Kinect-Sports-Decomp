extern int fn_82BEA200();
extern int fn_82BEA230();


unsigned int fn_82BE7A68(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82BEA200(0xffffffff8322b1ec,0xffffffff820e9a74);
  if (iVar1 != 0) {
    if (*(int *)(param_1 * 0xc + -0x7ce8adb0) != 0) {
      fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e9a74);
      return *(unsigned int *)(param_1 * 0xc + -0x7ce8adb0);
    }
    fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e9a74);
  }
  return 0;
}


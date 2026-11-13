extern int fn_82C2C1E8();
extern int fn_82F691F0();


void fn_82E345A8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = fn_82C2C1E8(iVar1);
  if (-1 < iVar2) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(iVar1 + 0x13c),0,
                 ((__int64)(int)(unsigned int)*(unsigned short *)(iVar1 + 0x22) * (__int64)*(int *)(iVar1 + 0x100)
                 & 0x7fffffffU) << 1);
  }
  return;
}


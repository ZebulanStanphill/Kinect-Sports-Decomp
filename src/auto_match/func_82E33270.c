extern int fn_82C2B580();
extern int fn_82C2BC00();
extern int fn_82F691F0();


unsigned __int64 fn_82E33270(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *param_1;
  uVar2 = fn_82C2BC00(iVar1);
  if (-1 < (int)uVar2) {
    uVar3 = fn_82C2B580(((__int64)(int)(unsigned int)*(unsigned short *)(iVar1 + 0x22) *
                          (__int64)*(int *)(iVar1 + 0x100) & 0x3fffffffU) << 2);
    *(int *)(iVar1 + 0x13c) = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,((__int64)(int)(unsigned int)*(unsigned short *)(iVar1 + 0x22) *
                            (__int64)*(int *)(iVar1 + 0x100) & 0x3fffffffU) << 2);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}


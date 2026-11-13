extern int fn_82A68EA0();
extern int fn_82F691F0();


unsigned __int64 fn_82C3E718(unsigned int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = (param_2 & 0xffff) << 1;
  *param_1 = param_2 & 0xffff;
  uVar2 = fn_82A68EA0(iVar1,0x40);
  param_1[0xc] = (unsigned int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,iVar1);
}


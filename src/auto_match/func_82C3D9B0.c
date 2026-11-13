extern int fn_82A68EA0();
extern int fn_82F691F0();


unsigned __int64 fn_82C3D9B0(int param_1,int *param_2,short param_3)

{
  unsigned __int64 uVar1;
  
  *param_2 = (int)param_3;
  uVar1 = fn_82A68EA0(((__int64)
                             (int)((unsigned int)*(unsigned short *)(param_1 + 0x22) *
                                  (unsigned int)*(unsigned short *)(param_1 + 0x22)) * (__int64)(int)param_3 &
                            0x7fffffffU) << 1,0x40);
  param_2[7] = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0,((__int64)
                        (int)((unsigned int)*(unsigned short *)(param_1 + 0x22) * (unsigned int)*(unsigned short *)(param_1 + 0x22))
                        * (__int64)(int)param_3 & 0x7fffffffU) << 1);
}


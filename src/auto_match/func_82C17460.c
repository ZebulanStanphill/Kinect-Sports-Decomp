extern int fn_82A6C8E8();
extern int fn_82F691F0();


unsigned __int64 fn_82C17460(int *param_1)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (iVar1 = *param_1, iVar1 != 0)) {
    fn_82A6C8E8(param_1 + 0x38);
    param_1[0x3b] = 0;
    param_1[0x47] = 1;
    param_1[0x3c] = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(unsigned int *)(iVar1 + 0x164),0,(unsigned __int64)*(unsigned short *)(iVar1 + 0x22) << 2);
  }
  return 0;
}


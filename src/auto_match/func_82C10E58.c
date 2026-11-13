extern int fn_82C10AD0();
extern int fn_82F691F0();


unsigned __int64 fn_82C10E58(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  
  *param_3 = 0;
  uVar1 = fn_82C10AD0(*(unsigned int *)(param_1 + 0x1fc),2,*(unsigned int *)(param_1 + 0x204),param_3)
  ;
  if (-1 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*param_3,0,*(unsigned int *)(param_1 + 0x204));
  }
  return uVar1;
}

